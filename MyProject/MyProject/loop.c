#include <stdio.h>

int main_loop(void)
{
	/*int b = 20;				// ++�� �� : + 1
	printf("b�� %d\n", ++b);	// +1 �ϰ� ���
	printf("b�� %d\n", b++);	// ����ϰ� + 1
	printf("b�� %d\n", b);*/

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

	// �ݺ���
	// for, while, do while

	// for (����, ����, ����)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/

	// while (����) (   )
	/*int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
	}*/

	// do {  } while (����)
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	//2�� �ݺ���
	/*for (int i = 1; i <= 3; i++)
	{
		printf("ù��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("       �ι�° �ݺ��� : %d\n", j);
		}
	}*/

	//������ �ڵ� ¥�� (��: ����§��, �Ʒ�: ¥�ذ�)
	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d��: %d * 1 = %d\n", i, i, i * 1);
		printf("%d��: %d * 2 = %d\n", i, i, i * 2);
		printf("%d��: %d * 3 = %d\n", i, i, i * 3);
		printf("%d��: %d * 4 = %d\n", i, i, i * 4);
		printf("%d��: %d * 5 = %d\n", i, i, i * 5);
		printf("%d��: %d * 6 = %d\n", i, i, i * 6);
		printf("%d��: %d * 7 = %d\n", i, i, i * 7);
		printf("%d��: %d * 8 = %d\n", i, i, i * 8);
		printf("%d��: %d * 9 = %d\n", i, i, i * 9);*/

	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d�� ���\n", i);
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

	// �Ƕ�̵带 �׾ƶ�
	int floor;
	printf("�� ������ �װڴ���?");
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
	printf("���ϰ� ���� �� ������ �Է��ϼ���.");
	scanf_s("%d %d", &A, &B);
	printf("%d", A + B);*/

	return 0;
}