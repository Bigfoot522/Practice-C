#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MBG_1.h"

int inning = 1;
int score = 0;
int strike = 0;
int ball = 0;
int hits = 0;
int hit_man[4] = { 0, 0, 0, 0 };
int out = 0;
int base[4] = { 0, 0, 0, 0 };
int a = 0;
int one = 0, two = 0, three = 0;
int b;
int c;

int print_menu() {
	draw_line();
	printf("\n");
	printf("\t\t1. ���� ����\n\n");
	printf("\t\t2. ���� ����\n\n");
	printf("\t\t3. ���� ����\n\n");
	draw_line();
	printf("\n");
	printf("�����ϰ��� �ϴ� �޴��� �Է��ϼ���:");
	int i;
	scanf("%d", &i);
	return i;
}

void draw_line() {
	for (int i = 0; i < 50; i++)
		printf("=");
	printf("\n");
}

void print_info() {
	printf("\n---------------------------�̴� �߱� ���� ����---------------------------\n\n");
	printf(" �� ������ �߱��� ���� �Ϻ� ������ \'�̴� �߱� ����\'�Դϴ�.\n\n");
	printf("   1. ������ �� 3ȸ�� �̷���� �ֽ��ϴ�.\n\n");
	printf("   2. �÷��̾�� ���� Ȥ�� ���� �Ÿ� �� �ֽ��ϴ�.\n\n");
	printf("   3. ��Ÿ�� ġ�ų� ������ �Ǹ� ��� �� �� �ֽ��ϴ�.\n\n");
	printf("   4. ���ڿ� ���� �ƿ��� ������, �ö��� �ƿ�, ��Ʈ����ũ �ƿ��� �ֽ��ϴ�.\n\n");
	printf("   5. 3ȸ���� ������ ������ 10�� �̻��̸� ���ӿ��� �¸��ϰ� �˴ϴ�.\n\n");
	printf("-------------------------------------------------------------------------\n\n");
	printf("���� �޴��� ���ư���(-1):");
	int i = 0;
	while (i != -1) {
		scanf("%d", &i);
	}
	system("cls");
}

void start_game() {
	printf("������ �����մϴ�.\n");
	draw_line();
	start_inning();
}


int start_inning() {
	while (1) {
		if (b == 1) {
			printf("��Ÿ�Դϴ�.\n");
			draw_line();
		}
		else if (b == 2) {
			printf("2��Ÿ�Դϴ�.\n");
			draw_line();
		}
		else if (b == 3) {
			printf("3��Ÿ�Դϴ�.\n");
			draw_line();
		}
		else if (b == 4) {
			printf("Ȩ���Դϴ�!\n");
			draw_line();
		}
		else if (b == 5) {
			printf("�ö��� �ƿ��Դϴ�.\n");
			draw_line();
		}
		else if (b == 6) {
			printf("��Ʈ����ũ�Դϴ�.\n");
			draw_line();
		}
		if (c == 1){
			printf("��Ʈ����ũ�Դϴ�.");
			draw_line();
		}
		else if (c == 2) {
			printf("���Դϴ�.");
			draw_line();
		}
		b = 0;
		c = 0;
		printf("%d ȸ\n", inning);
		print_score();
		print_count();
		print_base();
		printf("1. ����,   2. �Ÿ���\n");
		printf("�Է�: ");

		int swing_pass = 0;
		scanf("%d", &swing_pass);
		if (swing_pass == 1) {
			b = get_swing_result();
			if (b == 1) {
				for (int i = 0; i < 4; i++) {
					if (hit_man[i] != 0)
						hit_man[i] += 1;
					if (hit_man[i] == 4) {
						score += 1;
						hit_man[i] = 0;
					}
				}
				hit_man[a] += 1;
				if (a == 4)
					a = 0;
			}
			else if (b == 2) {
				for (int i = 0; i < 4; i++) {
					if (hit_man[i] != 0)
						hit_man[i] += 2;
					if (hit_man[i] >= 4) {
						score += 1;
						hit_man[i] = 0;
					}
				}
				hit_man[a] += 2;
				if (a >= 4)
					a = 0;
			}
			else if (b == 3) {
				for (int i = 0; i < 4; i++) {
					if (hit_man[i] != 0)
						hit_man[i] += 3;
					if (hit_man[i] >= 4) {
						score += 1;
						hit_man[i] = 0;
					}
				}
				hit_man[a] += 3;
				if (a >= 4)
					a = 0;
			}
			else if (b == 4) {
				for (int i = 0; i < 4; i++) {
					if (hit_man[i] != 0)
						score += 1;
					hit_man[i] = 0;
				}
				score += 1;
			}
			else if (b == 5) {
				out += 1;
			}
			else {
				strike += 1;
			}
		}
		else if (swing_pass == 2) {
			c = get_pass_result();
			if (c == 1) {
				strike += 1;
			}
			else {
				ball += 1;

			}
		}
		ball_check();
		strike_check();
		out_check;
		system("cls");
	}
}

void print_score() {
	if (inning == 1) {
		one = score;
	}
	else if (inning == 2) {
		two = score;
	}
	else if (inning == 3) {
		three = score;
	}
	printf("������������������������������������������������������������������������������������������\n");
	printf("��            1ȸ   2ȸ   3ȸ       �� ��    ��\n");
	printf("  �� ��       ");
	switch (inning) {
	case 1:	printf("%d                             \n", one); break;
	case 2:	printf("%d     %d                       \n", one, two); break;
	case 3:	printf("%d     %d     %d                 \n", one, two, three); break;
	default:printf("%d     %d     %d          %d      \n", one, two, three, one + two + three); break;
	}
	printf("��                                           ��\n");
	printf("������������������������������������������������������������������������������������������\n");
}

void print_count() {
	printf("B ");
	for (int a = ball; a > 0; --a)
		printf("��");
	for (int a = 3 - ball; a > 0; --a)
		printf("��");
	printf("\n");
	printf("S ");
	for (int a = strike; a > 0; --a)
		printf("��");
	for (int a = 2 - strike; a > 0; --a)
		printf("��");
	printf("\n");
	printf("O ");
	for (int a = out; a > 0; --a)
		printf("��");
	for (int a = 2 - out; a > 0; --a)
		printf("��");
	printf("\n");
}

void print_base() {
	for (int i = 0; i < 4; i++) {
		if (hit_man[i] != 0) {
			if (hit_man[i] == 1)
				base[0] = 1;
			if (hit_man[i] == 2)
				base[1] = 1;
			if (hit_man[i] == 3)
				base[2] = 1;
			if (hit_man[i] == 4)
				base[3] = 1;
		}
	}
	if (base[1] == 0)
		printf("            ��\n");
	else
		printf("            ��\n");
	printf("         ��    ��\n");
	printf("      ��          ��\n");
	printf("   ��                ��\n");
	if (base[2] == 0)
		printf("��                      ");
	else
		printf("��                      ");
	if (base[0] == 0)
		printf("��\n");
	else
		printf("��\n");
	printf("   ��                ��\n");
	printf("      ��          ��\n");
	printf("         ��    ��\n");
	printf("            ��\n");
}

int get_swing_result() {
	srand(time(NULL));
	int swing_result;
	swing_result = rand() % 100;
	switch (swing_result) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: 
		return 1;
		break;
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20: 
		return 2;
		break;
	case 21:
	case 22:
	case 23:
	case 24:
	case 25: 
		return 3;
		break;
	case 26:
	case 27:
	case 28: 
		return 4;
		break;
	case 29:
	case 30:
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
	case 61: 
		return 5;
		break;
	default: 
		return 6;
		break;
	}
}

int get_pass_result() {
	srand(time(NULL));
	int pass_result;
	pass_result = rand() % 100;
	switch (pass_result) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
	case 32:
	case 33:
	case 34:
		return 1;
		break;
	default:
		return 2;
		break;
	}
}

void out_check() {
	if (out >= 3) {
		inning += 1;
		score = 0;
		out = 0;
	}
	score_check();
	inning_check();
}

void score_check() {
	if (one + two + three >= 10)
		inning_check();
}

void inning_check() {
	if (inning == 4) {
		printf("��Ⱑ ����Ǿ����ϴ�.");
		draw_line();
		print_score();
		if (score >= 10) {
			printf("* ���: �÷��̾ �¸��Ͽ����ϴ�.");
		}
		else {
			printf("* ���: �÷��̾ �й��Ͽ����ϴ�.");
		}
		printf("���� �޴��� ���ư���(-1):");
	}
}

void strike_check() {
	if (strike == 3) {
		strike = 0;
		out += 1;
		out_check();
	}
}

void ball_check() {
	int n = a;
	int i;

	if (ball == 4) {
		ball = 0;
		for (i = 1; i < 5; i++)
			if (hit_man[n - i] == -1)
				n += 4;
			if (hit_man[n - i] != 0) {
				if (hit_man[n - i - 1] > 0)
					hit_man[n - i] += 1;
			if (hit_man[n] == 4) {
				score += 1;
				hit_man[n-i] = 0;
			}
		}
	}
}