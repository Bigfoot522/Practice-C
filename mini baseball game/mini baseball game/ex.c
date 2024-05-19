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
	printf("\t\t1. 게임 시작\n\n");
	printf("\t\t2. 게임 설명\n\n");
	printf("\t\t3. 게임 종료\n\n");
	printf("==================================================\n");
	printf("선택하고자 하는 메뉴를 입력하세요:");
	int i;
	scanf("%d", &i);
	switch (i) {
	case 1:start_game(); break;
	case 2:print_info(); break;
	case 3:
		printf("프로그램을 종료합니다...\n");
		exit(0);
	default: 
		erase_page();
		printf("메뉴를 다시 선택해주세요.\n");
		print_menu(); break;
	}
}

void print_info() {
	erase_page();
	printf("\n---------------------------미니 야구 게임 설명---------------------------\n\n");
	printf(" 본 게임은 야구의 룰을 일부 적용한 \'미니 야구 게임\'입니다.\n\n");
	printf("   1. 게임은 총 3회로 이루어져 있습니다.\n\n");
	printf("   2. 플레이어는 스윙 혹은 공을 거를 수 있습니다.\n\n");
	printf("   3. 안타를 치거나 볼넷이 되면 출루 할 수 있습니다.\n\n");
	printf("   4. 주자에 의한 아웃은 없으며, 플라이 아웃, 스트라이크 아웃만 있습니다.\n\n");
	printf("   5. 3회까지 득점한 점수가 10점 이상이면 게임에서 승리하게 됩니다.\n\n");
	printf("-------------------------------------------------------------------------\n\n");
	printf("메인 메뉴로 돌아가기(-1):");
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
	printf("게임을 시작합니다.\n");
	start_inning();
}

void start_inning() {
	draw_line();
	print_score();
	print_count(ball, strike, out);
	print_base();
	printf("1. 스윙,   2. 거르기\n");
	printf("입력: ");
	int i;
	scanf("%d", &i);
	switch (i) {
	case 1:get_swing_result(); break;
	case 2:get_pass_retult(); break;
	default: 
		printf("숫자를 다시 입력하세요");
		start_inning();
	}
}

void print_score() {
	printf("%d 회\n", inning);
	printf("┌───────────────────────────────────────────┐\n");
	printf("│            1회   2회   3회       총 점    │\n");
	printf("  점 수                                        \n");
	printf("│             %d                             │\n", 0);
	printf("└───────────────────────────────────────────┘\n");
}

void print_count(ball, strike, out){
	printf("B ");
	if (ball == 0)
		printf("○○○\n");
	else if (ball == 1)
		printf("●○○\n");
	else if (ball == 2)
		printf("●●○\n");
	else
		printf("●●●\n");
	printf("S ");
	if (strike == 0)
		printf("○○\n");
	else if (strike == 1)
		printf("●○\n");
	else if (strike == 2)
		printf("●●\n");
	else
		out = out + 1;
	printf("O ");
	if (out == 0)
		printf("○○\n");
	else if (out == 1)
		printf("●○\n");
	else if (out == 2)
		printf("●●\n");
	else
		inning = inning + 1;
}

void print_base(){
	printf("            ◇\n");
	printf("         ↙    ↖\n");
	printf("      ↙          ↖\n");
	printf("   ↙                ↖\n");
	printf("◇                      ◆\n");
	printf("   ↘                ↗\n");
	printf("      ↘          ↗\n");
	printf("         ↘    ↗\n");
	printf("            ◇\n");
}

void get_swing_result() {
	srand(time(NULL));
	int swing_random;
	swing_random = rand() % 100;

	if (0 <= swing_random && swing_random < 14) {
		erase_page();
		printf("안타입니다.\n");
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
		printf("2루타입니다.\n");
		start_inning();
	}
	else if (21 <= swing_random && swing_random < 26) {
		erase_page();
		printf("3루타입니다.\n");
		start_inning();
	}
	else if (26 <= swing_random && swing_random < 29) {
		erase_page();
		printf("홈런입니다.\n");
		start_inning();
	}
	else if (29 <= swing_random && swing_random < 62) {
		erase_page();
		printf("플라이 아웃입니다.\n");
		printf("");
		out = out + 1;
		start_inning();
	}
	else {
		printf("스트라이크 입니다.");
		strike = strike + 1;
		erase_page();
		start_inning();
	}
}
void get_pass_retult() {
	srand(time(NULL));
	int pass_random = rand() % 100;
	if (0 <= pass_random && pass_random < 65) {
		printf("볼 입니다.\n");
	}
	else if (65 <= pass_random && pass_random < 100) {
		printf("스트라이크 입니다.");
	}
}