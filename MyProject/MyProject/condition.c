#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	//int age = 15;
	////if (����) {...} else {...}
	//if (age >= 20)
	//{
	//	printf("�Ϲ��� �Դϴ�");
	//}
	//else
	//{
	//printf("�л��Դϴ�");
	//}

	// �ʵ��л�(8 ~ 13) / ���л� (14 ~ 16) / �����л� (17 ~ 19)
	// if / else if / else

	//int age;
	//printf("���̸� �Է��Ͻÿ�\n");
	//scanf_s("%d", &age);

	//if (age >= 8 && age <= 13)		// && : �� �� ������ ��
	//{
	//	printf("�ʵ��л� �Դϴ�.");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("���л� �Դϴ�.");
	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("�����л� �Դϴ�.");
	//}
	//else
	//{
	//	printf("�л��� �ƴѰ�����~?");
	//}

	// break / continue
	// 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.

	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("�������� ������ ������");
			break;
		}
		printf("%d�� �л��� ���Ƽ� �������� �غ��ϼ���\n", i);
	}*/

	// 1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
	// 7���� �����ϰ� 6������ 10������ ���� ��ǥ�� �ϼ���

	/*for (int i = 6; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d�� �л��� �Ἦ�Դϴ�. �Ф�\n", i);
				continue;
			}
			printf("%d�� �л��� ���Ƽ� �������� �غ��ϼ���!\n",i);
		}
		else if (i >= 11)
		{
			printf("�������� ������ ���ư���~");
			break;
		}
	}*/

	// && || (and or)

	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a�� b, Ȥ�� c�� d�� ���� �����ϴ�.\n");
	}
	else
	{
		printf("���� ���� �ٸ��׿�\n");
	}*/

	// ���� ���� ��
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("����");
	}
	else if (i == 1)
	{
		printf("����");
	}
	else if (i == 2)
	{
		printf("��");
	}
	else
	{
		printf("������");
	}*/

	// ����ġ ���̽��� ������ ���� �������� �Ʒ� ���ɹ��� Ȯ�ξ��ϰ� ������ ���� �׷��� break�� ������ ������ �Ʒ��� �� ��µȴ�.
	
	/*srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0:printf("����"); break;
	case 1:printf("����"); break;
	case 2:printf("��"); break;
	default:printf("������");
	}*/

	/*int age = 20;
	switch (age) 
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("�ʵ��л��Դϴ�."); break;
	case 14:
	case 15:
	case 16:printf("���л��Դϴ�."); break;
	case 17:
	case 18:
	case 19:printf("�����л��Դϴ�."); break;
	default: printf("�л��� �ƴѰ�����?"); break;
	}

	return 0; */
	
	/*for (int i = 0; i < 5; i++) {
		if (i == 3) {
			continue;
		}
		printf("%d", i);
		}*/

	// up & down
	
	// my self
	/*srand(time(NULL));
	int i = rand() % 100 + 1;
	int answer = 0;
	int chance = 5;
	while (chance > 0)
	{
		int j;
		printf("���� ��ȸ %d\n", chance--);
		printf("1���� 100���� �� �� �ϳ��� ��������\n");
		scanf_s("%d", &j);
		if (chance > 0 && j > i)
		{
			printf("down\n");
			continue;
		}
		else if (chance > 0 && j < i)
		{
			printf("up\n");
			continue;
		}
		else if (chance == 0)
		{
			printf("next time~");
		}
		else if (j == i)
		{
			printf("corract!\n");
			break;
		}
	}*/
	
	/*srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1)
	{
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���纸���� (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN �� \n\n");
		}
		else if (answer < num)
		{
			printf("UP �� \n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ� !\n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��Ͽ����ϴ�");
		}
		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̳׿�. �ƽ��� �����߽��ϴ�. \n");
			break;
		}
	}*/
	
	/*char a[15] = "\0";
	int total = 0;
	scanf_s("%d", a);
	if (a[1] == '\0') {
		printf("2�� �̻� �Է��ϼž� �մϴ�.");
		scanf_s("%d", a);
	}
	else if (a[0] == '\0') {
		printf("2�� �̻� �Է��ϼž� �մϴ�.");
		scanf_s("%d", a);
	}
	else if (a[14] != '\0') {
		printf("15�� �̳��� �Է��ϼž� �մϴ�.");
		scanf_s("%d", a);
	}

	for (int i = 0; i < 15; i++) {
		if (a[i] == 'A', 'B', 'C')
			total += 2;
		else if (a[i] == 'D', 'E', 'F')
			total += 3;
		else if (a[i] == 'G', 'H', 'I')
			total += 4;
		else if (a[i] == 'J', 'K', 'L')
			total += 5;
		else if (a[i] == 'M', 'N', 'O')
			total += 6;
		else if (a[i] == 'P', 'Q', 'R', 'S')
			total += 7;
		else if (a[i] == 'T', 'U', 'V')
			total += 8;
		else if (a[i] == 'W', 'X', 'Y', 'Z')
			total += 9;
	}
	printf("%d", total);*/

		char a[15];
		int time = 2;
		scanf_s("%s", a);
		int len = strlen(a);
		for (int i = 0; i < len; i++) {
			switch (a[i]) {
			case 'A':
			case 'B':
			case 'C':
				time += 1;
				break;
			case 'D':
			case 'E':
			case 'F':
				time += 2;
				break;
			case 'G':
			case 'H':
			case 'I':
				time += 3;
				break;
			case 'J':
			case 'K':
			case 'L':
				time += 4;
				break;
			case 'M':
			case 'N':
			case 'O':
				time += 5;
				break;
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
				time += 6;
				break;
			case 'T':
			case 'U':
			case 'V':
				time += 7;
				break;
			case 'W':
			case 'X':
			case 'Y':
				time += 8;
				break;
			default:
				break;
			}
		}
		printf("%d", time);

		return 0;
}