#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void print_menu();
void print_info();
void draw_line();
void erase_page();
void start_game();
void start_inning();
void print_score();
void print_count();
void print_base();
void get_swing_result();
void get_pass_retult();
int base[3] = { 0, 0, 0 }, score = 0, inning = 1;
int ball, strike, out;

int main(void) {
	print_menu();
}

void print_menu() {
	printf("\n==================================================\n\n");
	printf("\t\t1. ���� ����\n\n");
	printf("\t\t2. ���� ����\n\n");
	printf("\t\t3. ���� ����\n\n");
	printf("==================================================\n");
	printf("�����ϰ��� �ϴ� �޴��� �Է��ϼ���:");
	int i;
	scanf("%d", &i);
	switch (i) {
	case 1:start_game(); break;
	case 2:print_info(); break;
	case 3:
		printf("���α׷��� �����մϴ�...\n");
		exit(0);
	default: 
		erase_page();
		printf("�޴��� �ٽ� �������ּ���.\n");
		print_menu(); break;
	}
}

void print_info() {
	erase_page();
	printf("\n---------------------------�̴� �߱� ���� ����---------------------------\n\n");
	printf(" �� ������ �߱��� ���� �Ϻ� ������ \'�̴� �߱� ����\'�Դϴ�.\n\n");
	printf("   1. ������ �� 3ȸ�� �̷���� �ֽ��ϴ�.\n\n");
	printf("   2. �÷��̾�� ���� Ȥ�� ���� �Ÿ� �� �ֽ��ϴ�.\n\n");
	printf("   3. ��Ÿ�� ġ�ų� ������ �Ǹ� ��� �� �� �ֽ��ϴ�.\n\n");
	printf("   4. ���ڿ� ���� �ƿ��� ������, �ö��� �ƿ�, ��Ʈ����ũ �ƿ��� �ֽ��ϴ�.\n\n");
	printf("   5. 3ȸ���� ������ ������ 10�� �̻��̸� ���ӿ��� �¸��ϰ� �˴ϴ�.\n\n");
	printf("-------------------------------------------------------------------------\n\n");
	printf("���� �޴��� ���ư���(-1):");
	int back;
	scanf("%d", &back);
	if (back == -1)
		erase_page();
		print_menu();
}

void draw_line() {
	printf("==================================================\n");
}

void erase_page() {
	system("cls");
}

void start_game() {
	erase_page();
	draw_line();
	printf("������ �����մϴ�.\n");
	start_inning();
}

void start_inning() {
	draw_line();
	print_score();
	print_count(ball, strike, out);
	print_base();
	printf("1. ����,   2. �Ÿ���\n");
	printf("�Է�: ");
	int i;
	scanf("%d", &i);
	switch (i) {
	case 1:get_swing_result(); break;
	case 2:get_pass_retult(); break;
	default: 
		printf("���ڸ� �ٽ� �Է��ϼ���");
		start_inning();
	}
}

void print_score() {
	printf("%d ȸ\n", inning);
	printf("������������������������������������������������������������������������������������������\n");
	printf("��            1ȸ   2ȸ   3ȸ       �� ��    ��\n");
	printf("  �� ��                                        \n");
	printf("��             %d                             ��\n", 0);
	printf("������������������������������������������������������������������������������������������\n");
}

void print_count(ball, strike, out){
	printf("B ");
	if (ball == 0)
		printf("�ۡۡ�\n");
	else if (ball == 1)
		printf("�ܡۡ�\n");
	else if (ball == 2)
		printf("�ܡܡ�\n");
	else
		printf("�ܡܡ�\n");
	printf("S ");
	if (strike == 0)
		printf("�ۡ�\n");
	else if (strike == 1)
		printf("�ܡ�\n");
	else if (strike == 2)
		printf("�ܡ�\n");
	else
		out = out + 1;
	printf("O ");
	if (out == 0)
		printf("�ۡ�\n");
	else if (out == 1)
		printf("�ܡ�\n");
	else if (out == 2)
		printf("�ܡ�\n");
	else
		inning = inning + 1;
}

void print_base(){
	printf("            ��\n");
	printf("         ��    ��\n");
	printf("      ��          ��\n");
	printf("   ��                ��\n");
	printf("��                      ��\n");
	printf("   ��                ��\n");
	printf("      ��          ��\n");
	printf("         ��    ��\n");
	printf("            ��\n");
}

void get_swing_result() {
	srand(time(NULL));
	int swing_random;
	swing_random = rand() % 100;

	if (0 <= swing_random && swing_random < 14) {
		erase_page();
		printf("��Ÿ�Դϴ�.\n");
		if (base[0] == 0)
			base[0] == 1;
		else if (base[0] == 1 && base[1] == 0)
			base[0], base[1] == 1;
		else if (base[0] == 1 && base[1] == 1 && base[2] == 0)
			base[0], base[1], base[2] == 1;
		else
			base[0], base[1], base[2] == 0;
		score = score + 1;
		start_inning();
	}
	else if (14 <= swing_random && swing_random < 21) {
		erase_page();
		printf("2��Ÿ�Դϴ�.\n");
		start_inning();
	}
	else if (21 <= swing_random && swing_random < 26) {
		erase_page();
		printf("3��Ÿ�Դϴ�.\n");
		start_inning();
	}
	else if (26 <= swing_random && swing_random < 29) {
		erase_page();
		printf("Ȩ���Դϴ�.\n");
		start_inning();
	}
	else if (29 <= swing_random && swing_random < 62) {
		erase_page();
		printf("�ö��� �ƿ��Դϴ�.\n");
		printf("");
		out = out + 1;
		start_inning();
	}
	else {
		printf("��Ʈ����ũ �Դϴ�.");
		strike = strike + 1;
		erase_page();
		start_inning();
	}
}
void get_pass_retult() {
	srand(time(NULL));
	int pass_random = rand() % 100;
	if (0 <= pass_random && pass_random < 65) {
		printf("�� �Դϴ�.\n");
	}
	else if (65 <= pass_random && pass_random < 100) {
		printf("��Ʈ����ũ �Դϴ�.");
	}
}