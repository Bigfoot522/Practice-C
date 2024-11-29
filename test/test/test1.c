#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_sdf() {
	float input;

	printf("x 를 입력하시오: ");
	scanf("%f", &input);

	input = (input * input * input - 20) / (input - 7);

	printf("결과값: %f\n\n",(float)input);

	printf("20214067 컴퓨터공학과 박준형\n");
}