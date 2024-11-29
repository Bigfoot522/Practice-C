#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int base[7] = { 0, 0, 0, 0, 0, 0, 0 }, score[3] = { 0, 0, 0 }, inning = 1, fly_out = 0, strike_out = 0;
int total = 0, hits, end;
int ball = 0, strike = 0, out = 0;

void print_menu();
void print_info();
void draw_line();
void erase_page();
void start_game();
int start_inning();
void print_score();
void print_count();
void print_base();
void get_swing_result();
void get_pass_retult();
void hits_ball();
void hits_swing();

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
	if (back == -1) {
		erase_page();
		print_menu();
	}
}

void draw_line() {
	for(int i = 0; i < 50; i++)
		printf("=");
	printf("\n");
}

void erase_page() {
	system("cls");
}

void start_game() {
	erase_page();
	draw_line();
	printf("게임을 시작합니다.\n");
	for (int i = 0; i < 3; i++) {
		start_inning();
	}

	inning = 4;
	ball, strike, out = 0;

	erase_page();
	printf("이닝이 종료되었습니다.\n");
	printf("\n경기가 종료되었습니다.\n");
	draw_line();
	print_score();
	if (total >= 10)
		printf("* 결과 : 플레이어가 승리하였습니다.");
	else
		printf("* 결과 : 플레이어가 패배하였습니다.");
	printf("메인메뉴로 돌아가기(-1):");
	int back;
	scanf("%d", &back);
	if (back == -1) {
		erase_page();
		print_menu();
	}
}

int start_inning() {
	while (out != 3) {
		draw_line();
		print_score();
		print_count(ball, strike, out);
		print_base();
		printf("1. 스윙,   2. 거르기\n");
		printf("입력: ");
		int i;
		scanf("%d", &i);
		if (i != 1 && i != 2) {
			printf("숫자를 다시 입력하세요\n");
			while (i != 1 && i != 2)
				scanf("%d", &i);
		}
		switch (i) {
		case 1:get_swing_result(); break;
		case 2:get_pass_retult(); break;
		default: break;
		}
	}
}

void print_score() {
	total = score[0] + score[1] + score[2];
	if (inning = 1, 2, 3) {
		printf("%d 회\n", inning);
	}
	printf("┌───────────────────────────────────────────┐\n");
	printf("│            1회   2회   3회       총 점    │\n");
	printf("  점 수                                        \n");
	switch (inning) {
	case 1:	printf("│             %d                             │\n", score[0]); break;
	case 2:	printf("│             %d     %d                       │\n", score[0], score[1]); break;
	case 3:	printf("│             %d     %d     %d                 │\n", score[0], score[1], score[2]); break;
	default:printf("│             %d     %d     %d          %d      │\n", score[0], score[1], score[2], total); break;
	}
	printf("└───────────────────────────────────────────┘\n");
}

void print_count(b, s, o){
	printf("B ");
	if (b == 0)
		printf("○○○\n");
	else if (b == 1)
		printf("●○○\n");
	else if (b == 2)
		printf("●●○\n");
	else if (b == 3)
		printf("●●●\n");
	else {
		ball = 0;
		printf("○○○\n");
		hits_ball();
	}
	printf("S ");
	if (s == 0)
		printf("○○\n");
	else if (s == 1)
		printf("●○\n");
	else if (s == 2)
		printf("●●\n");
	else {
		strike = 0;
		printf("○○\n");
	}
	printf("O ");
	if (o == 0)
		printf("○○\n");
	else if (o == 1)
		printf("●○\n");
	else if (o == 2)
		printf("●●\n");
	else {
		printf("○○\n");
	}
	if (fly_out == 1) {
		erase_page();
		inning = inning + 1;
		printf("플라이 아웃입니다.\n");
		fly_out = 0;
		ball, strike, out = 0;
	}
	if (strike_out == 1) {
		erase_page();
		inning = inning + 1;
		printf("스트라이크 아웃입니다.\n");
		strike_out = 0;
		ball, strike, out = 0;
	}
}

void print_base(){
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

void get_swing_result() {
	srand(time(NULL));
	int swing_random;
	swing_random = rand() % 100;

	if (0 <= swing_random && swing_random < 14) {
		hits = 1;
		hits_swing();
		erase_page();
		printf("안타입니다.\n");
	}
	else if (14 <= swing_random && swing_random < 21) {
		hits = 2;
		hits_swing();
		erase_page();
		printf("2루타입니다.\n");
	}
	else if (21 <= swing_random && swing_random < 26) {
		hits = 3;
		hits_swing();
		erase_page();
		printf("3루타입니다.\n");
	}
	else if (26 <= swing_random && swing_random < 29) {
		hits = 4;
		hits_swing();
		erase_page();
		printf("홈런입니다.\n");
	}
	else if (29 <= swing_random && swing_random < 62) {
		erase_page();
		printf("플라이 아웃입니다.\n");
		out = out + 1;
		if (out == 3) {
			fly_out = 1;
			out = 0;
		}
	}
	else {
		erase_page();
		printf("스트라이크 입니다.\n");
		strike = strike + 1;
		if (strike == 3)
			out = out + 1;
		if (out == 3)
			strike_out = 1;
	}
}
void get_pass_retult() {
	srand(time(NULL));
	int pass_random = rand() % 100;
	if (0 <= pass_random && pass_random < 65) {
		erase_page();
		printf("볼 입니다.\n");
		ball = ball + 1;
	}
	else if (65 <= pass_random && pass_random < 100) {
		erase_page();
		printf("스트라이크 입니다.\n");
		strike = strike + 1;
		if (strike == 3)
			out = out + 1;
		if (out == 3)
			strike_out = 1;
	}
}

void hits_ball() {
	int i = 0;
	if (base[0] == 1 && base[1] == 0)
		base[1] = 1;
	else if (base[0] == 1 && base[1] == 1 && base[2] == 0)
		base[2] = 1;
	else if (base[0] == 1 && base[1] == 1 && base[2] == 1)
		base[3] = 1;
	else
		base[0] = 1;
	for (int i = 3; i < 8; i++) {
		if (base[i] == 1) {
			score[inning - 1] = score[inning - 1] + 1;
			base[i] = 0;
		}
	}
}

void hits_swing() {
	int j = hits;
	for (int i = 2; i > -1; i--) {
		if (base[i] == 1) {
			base[i] = 0;
			base[i + j] = 1;
		}
	}
	base[j - 1] = 1;
	for (int i = 3; i < 8; i++) {
		if (base[i] == 1) {
			score[inning - 1] = score[inning - 1] + 1;
			base[i] = 0;
		}
	}
}