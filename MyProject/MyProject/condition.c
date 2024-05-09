#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	//int age = 15;
	////if (조건) {...} else {...}
	//if (age >= 20)
	//{
	//	printf("일반인 입니다");
	//}
	//else
	//{
	//printf("학생입니다");
	//}

	// 초등학생(8 ~ 13) / 중학생 (14 ~ 16) / 고등학생 (17 ~ 19)
	// if / else if / else

	//int age;
	//printf("나이를 입력하시오\n");
	//scanf_s("%d", &age);

	//if (age >= 8 && age <= 13)		// && : 둘 다 만족할 때
	//{
	//	printf("초등학생 입니다.");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("중학생 입니다.");
	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("고등학생 입니다.");
	//}
	//else
	//{
	//	printf("학생이 아닌가봐요~?");
	//}

	// break / continue
	// 1번부터 30번까지 있는 반에서 1번부터 5번까지 조별 발표를 합니다.

	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지는 집에들 가세용");
			break;
		}
		printf("%d번 학생은 남아서 조별과제 준비하세욥\n", i);
	}*/

	// 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요

	/*for (int i = 6; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다. ㅠㅠ\n", i);
				continue;
			}
			printf("%d번 학생은 남아서 조별과제 준비하세욥!\n",i);
		}
		else if (i >= 11)
		{
			printf("나머지는 집에들 돌아가유~");
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
		printf("a와 b, 혹은 c와 d의 값이 같습니다.\n");
	}
	else
	{
		printf("값이 서로 다르네요\n");
	}*/

	// 가위 바위 보
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("가위");
	}
	else if (i == 1)
	{
		printf("바위");
	}
	else if (i == 2)
	{
		printf("보");
	}
	else
	{
		printf("몰러유");
	}*/

	// 스위치 케이스는 조건이 맞은 순간부터 아래 명령문을 확인안하고 무조건 실행 그래서 break를 해주지 않으면 아래가 다 출력된다.
	
	/*srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0:printf("가위"); break;
	case 1:printf("바위"); break;
	case 2:printf("보"); break;
	default:printf("몰라유");
	}*/

	/*int age = 20;
	switch (age) 
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("초등학생입니다."); break;
	case 14:
	case 15:
	case 16:printf("중학생입니다."); break;
	case 17:
	case 18:
	case 19:printf("고등학생입니다."); break;
	default: printf("학생이 아닌가봐요?"); break;
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
		printf("남은 기회 %d\n", chance--);
		printf("1부터 100까지 수 중 하나를 고르세요\n");
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
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1)
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞춰보세요 (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ↓ \n\n");
		}
		else if (answer < num)
		{
			printf("UP ↑ \n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다 !\n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생하였습니다");
		}
		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨네요. 아쉽게 실패했습니다. \n");
			break;
		}
	}*/
	
	/*char a[15] = "\0";
	int total = 0;
	scanf_s("%d", a);
	if (a[1] == '\0') {
		printf("2자 이상 입력하셔야 합니다.");
		scanf_s("%d", a);
	}
	else if (a[0] == '\0') {
		printf("2자 이상 입력하셔야 합니다.");
		scanf_s("%d", a);
	}
	else if (a[14] != '\0') {
		printf("15자 이내로 입력하셔야 합니다.");
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