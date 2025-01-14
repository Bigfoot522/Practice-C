#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int fact(int);

void main_fact() {
	int n, result;
	printf("\n 정수를 입력하세요 : ");
	scanf("%d", &n);
	result = fact(n);
	printf("\n\n %d의 팩토리얼 값은 %ld입니다.\n", n, result);
	getchar(); getchar();
}

long int fact(int n) {
	int value;
	if (n <= 1) {
		printf("\n fact(1) 함수 호출!");
		printf("\n fact(1) 값 1 반환!!");
		return 1;
	}
	else {
		printf("\n fact(%d) 함수 호출!", n);
		value = (n * fact(n - 1));
		printf("\n fact(%d) 값  %ld 반환!!", n, value);
		return value;
	}
}

#include <stdio.h>

void hanoi(int n, int start, int work, int target);
void main_hanoi() {
	hanoi(4, 'A', 'B', 'C');
	getchar();
}

void hanoi(int n, int start, int work, int target) {
	if (n == 1)
		printf(" %c에서 원반 %d를(을) %c로 옮김 \n", start, n, target);
	else {
		hanoi(n - 1, start, target, work);
		printf(" %c에서 원반 %d를(을) %c로 옮김 \n", start, n, target);
		hanoi(n - 1, work, start, target);
	}
}