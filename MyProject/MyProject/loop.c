#include <stdio.h>

int main_loop(void)
{
	/*int b = 20;				// ++의 뜻 : + 1
	printf("b는 %d\n", ++b);	// +1 하고 출력
	printf("b는 %d\n", b++);	// 출력하고 + 1
	printf("b는 %d\n", b);*/

	/*int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);*/

	// 반복문
	// for, while, do while

	// for (선언, 조건, 증감)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/

	// while (조건) (   )
	/*int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
	}*/

	// do {  } while (조건)
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	//2중 반복문
	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("       두번째 반복문 : %d\n", j);
		}
	}*/

	//구구단 코드 짜기 (위: 내가짠거, 아래: 짜준거)
	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d단: %d * 1 = %d\n", i, i, i * 1);
		printf("%d단: %d * 2 = %d\n", i, i, i * 2);
		printf("%d단: %d * 3 = %d\n", i, i, i * 3);
		printf("%d단: %d * 4 = %d\n", i, i, i * 4);
		printf("%d단: %d * 5 = %d\n", i, i, i * 5);
		printf("%d단: %d * 6 = %d\n", i, i, i * 6);
		printf("%d단: %d * 7 = %d\n", i, i, i * 7);
		printf("%d단: %d * 8 = %d\n", i, i, i * 8);
		printf("%d단: %d * 9 = %d\n", i, i, i * 9);*/

	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}*/
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 4; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// 피라미드를 쌓아라
	int floor;
	printf("몇 층으로 쌓겠느냐?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor-1; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	/*int A;
	int B;
	printf("더하고 싶은 두 정수를 입력하세요.");
	scanf_s("%d %d", &A, &B);
	printf("%d", A + B);*/

	return 0;
}