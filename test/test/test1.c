#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_sdf() {
	float input;

	printf("x �� �Է��Ͻÿ�: ");
	scanf("%f", &input);

	input = (input * input * input - 20) / (input - 7);

	printf("�����: %f\n\n",(float)input);

	printf("20214067 ��ǻ�Ͱ��а� ������\n");
}