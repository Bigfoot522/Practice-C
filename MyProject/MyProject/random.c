#include <time.h>
#include <stdio.h>

int main_random(void)
{
	//srand(time(NULL)); // ���� �ʱ�ȭ
	//int num = rand() % 3 + 1; // 0 ~ 2 -> 1 ~ 3

	/*printf("���� �ʱ�ȭ ����.. \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}
	srand(time(NULL));
	printf("\n���� �ʱ�ȭ ����.. \n");
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", rand() % 10);
	}*/

	int N, i;
	scanf_s("%d", &N);
	for (i = 0; i < 9; i++)
	{
		printf("%d * %d = %d", N, i + 1, (i + 1) * N);
	}
	return 0;
}