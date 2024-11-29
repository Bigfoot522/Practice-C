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
	printf("\t\t1. 게임 시작\n\n");
	printf("\t\t2. 게임 설명\n\n");
	printf("\t\t3. 게임 종료\n\n");
	draw_line();
	printf("\n");
	printf("선택하고자 하는 메뉴를 입력하세요:");
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
	printf("\n---------------------------미니 야구 게임 설명---------------------------\n\n");
	printf(" 본 게임은 야구의 룰을 일부 적용한 \'미니 야구 게임\'입니다.\n\n");
	printf("   1. 게임은 총 3회로 이루어져 있습니다.\n\n");
	printf("   2. 플레이어는 스윙 혹은 공을 거를 수 있습니다.\n\n");
	printf("   3. 안타를 치거나 볼넷이 되면 출루 할 수 있습니다.\n\n");
	printf("   4. 주자에 의한 아웃은 없으며, 플라이 아웃, 스트라이크 아웃만 있습니다.\n\n");
	printf("   5. 3회까지 득점한 점수가 10점 이상이면 게임에서 승리하게 됩니다.\n\n");
	printf("-------------------------------------------------------------------------\n\n");
	printf("메인 메뉴로 돌아가기(-1):");
	int i = 0;
	while (i != -1) {
		scanf("%d", &i);
	}
	system("cls");
}

void start_game() {
	printf("게임을 시작합니다.\n");
	draw_line();
	start_inning();
}


int start_inning() {
	while (1) {
		if (b == 1) {
			printf("안타입니다.\n");
			draw_line();
		}
		else if (b == 2) {
			printf("2루타입니다.\n");
			draw_line();
		}
		else if (b == 3) {
			printf("3루타입니다.\n");
			draw_line();
		}
		else if (b == 4) {
			printf("홈런입니다!\n");
			draw_line();
		}
		else if (b == 5) {
			printf("플라이 아웃입니다.\n");
			draw_line();
		}
		else if (b == 6) {
			printf("스트라이크입니다.\n");
			draw_line();
		}
		if (c == 1){
			printf("스트라이크입니다.");
			draw_line();
		}
		else if (c == 2) {
			printf("볼입니다.");
			draw_line();
		}
		b = 0;
		c = 0;
		printf("%d 회\n", inning);
		print_score();
		print_count();
		print_base();
		printf("1. 스윙,   2. 거르기\n");
		printf("입력: ");

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
	printf("┌───────────────────────────────────────────┐\n");
	printf("│            1회   2회   3회       총 점    │\n");
	printf("  점 수       ");
	switch (inning) {
	case 1:	printf("%d                             \n", one); break;
	case 2:	printf("%d     %d                       \n", one, two); break;
	case 3:	printf("%d     %d     %d                 \n", one, two, three); break;
	default:printf("%d     %d     %d          %d      \n", one, two, three, one + two + three); break;
	}
	printf("│                                           │\n");
	printf("└───────────────────────────────────────────┘\n");
}

void print_count() {
	printf("B ");
	for (int a = ball; a > 0; --a)
		printf("●");
	for (int a = 3 - ball; a > 0; --a)
		printf("○");
	printf("\n");
	printf("S ");
	for (int a = strike; a > 0; --a)
		printf("●");
	for (int a = 2 - strike; a > 0; --a)
		printf("○");
	printf("\n");
	printf("O ");
	for (int a = out; a > 0; --a)
		printf("●");
	for (int a = 2 - out; a > 0; --a)
		printf("○");
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
		printf("            ◇\n");
	else
		printf("            ◆\n");
	printf("         ↙    ↖\n");
	printf("      ↙          ↖\n");
	printf("   ↙                ↖\n");
	if (base[2] == 0)
		printf("◇                      ");
	else
		printf("◆                      ");
	if (base[0] == 0)
		printf("◇\n");
	else
		printf("◆\n");
	printf("   ↘                ↗\n");
	printf("      ↘          ↗\n");
	printf("         ↘    ↗\n");
	printf("            ◇\n");
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
		printf("경기가 종료되었습니다.");
		draw_line();
		print_score();
		if (score >= 10) {
			printf("* 결과: 플레이어가 승리하였습니다.");
		}
		else {
			printf("* 결과: 플레이어가 패배하였습니다.");
		}
		printf("메인 메뉴로 돌아가기(-1):");
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