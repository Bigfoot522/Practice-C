#include <stdio.h>
#include <stdlib.h>
#include "MBG_1.h"

int main(void) {
	while (1) {
		switch (print_menu()) {
		case 1:
			system("cls");
			draw_line();
			start_game();
			break;
		case 2:
			system("cls");
			print_info();
			break;
		case 3:
			exit(0);
		default:
			system("cls");
			printf("�޴��� �ٽ� �������ּ���\n");
		}
	}
}