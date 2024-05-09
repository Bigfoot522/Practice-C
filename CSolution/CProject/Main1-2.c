// 챕터 2

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[16] = { 0 };
	int age;

	printf("이름이 뭐에요?\r\n");
	scanf("%s", &name);

	printf("나이가 어떻게 되시죠?\r\n");
	scanf("%d", &age);

	printf("이름: %s\r\n나이: %d", name, age);
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[16] = { 0 };
	int age;

	printf("이름과 나이를 공백으로 구분하여 입력하시오.\r\n");
	scanf("%s%d", name, &age);

	printf("이름: %s\r\n나이: %d", name, age);
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;
	printf("두 정수를 공백으로 구분하여 입력하세요.\r\n");

	scanf("%d%d", &a, &b);

	int c = a * b;
		printf("두 수의 곱은 %d입니다.", c);
}
*/
/*
	main은 무조건 하나
	printf, scanf 둘다 문자출력이지만 scanf는 호출되면 사용자의 호출이 있을 때까지 기다린다.(=입력이 있을때까지 실행을 멈춘다)
	%s 는 문자열 %d 는 숫자를 나타내기에 각각 대응되는 것으로 대체 된다.
	\0 문자열의 끝을 표시함
	\b 백스페이스, 커서 위치에서 한칸 뒤로 이동
	\t 탭 출력
	\n 줄 바꿈, 한 줄 넘어감
	\r 캐리지 리턴, 커서를 현재 라인 시작 위치로 옮김
	\" 큰따옴표 출력
	\' 작은따옴표 출력
	\\ 백슬래시(\) 출력
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char input[128] = { 0 };

	printf("입력>");
	scanf("%[^\n]s", input);

	printf("출력> %s", input);
}
*/
/*
scanf의 서식 문자열로 형식지정자 "%[^\n]s"를 전달한다.
이것은 중간에 띄어쓰기(공백)가 있어도 하나의 입력으로 받기 위함이다.
이와 같은 형식지정자는 오직 입력을 구분하는 기준으로 줄 바꿈만 사용한다는 의미이다.
*/
/*
1. Release, x64
2. $(SolutionDir)$(Platform)\$(Configuration)\
3. $(ProjectName)

$(SolutionDir) : 솔루션 디렉터리를 말합니다. 즉 D:\CProgramming\CSolution\을 의미합니다.
$(Platform) : 1.의 x64를 나타냅니다. 즉 64비트 시스템을 의미합니다.
$(Configuration) : 1.의 Realease 를 나타냅니다.
$(ProfectName) : 프로젝트 이름을 말합니다.
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiply(int i, int j)
{
	return i * j;
}

int add(int i, int j)
{
	return i + j;
}

int subtract(int i, int j)
{
	return i - j;
}

int main()
{
	int a;
	int b;
	printf("두 정수를 공백으로 구분하여 입력하세요.\r\n");

	scanf("%d%d", &a, &b);

	int c1 = multiply(a, b);
	int c2 = add(a, b);
	int c3 = subtract(a, b);
	printf("곱: %d\r\n합: %d\r\n차: %d", c1, c2, c3);
}
*/
/*
int a 는 a 라는 공간을 생성한다는 의미
int *p 는 주소를 저장하는 공간
그래서 다음으로 p = &s[0] 같은 식으로 주소값을 넣어줘야한다. ...맞나?
*/

// p.79 연습문제 와캬퍄

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year;
	printf("출생연도를 입력하세요\r\n");
	scanf("%d", &year);

	int a = year - 2001;
	printf("2002 한일 월드컵 당시 한국 나이는 %d세 입니다.", a);

}
*/

#include <stdio.h>

int main(void)
{
	int i;
	char s1[100] = { '\0' }, s2[100] = { '\0' };

	printf("첫번째 문자열 입력 :");
	scanf_s("%s", s1);
	printf("두번째 문자열 입력 :");
	scanf_s("%s", s2);

	for (i = 0; (s1[i] = '\0') & (s2[i] = '\0'); i++) {
		if (s1[i] != s2[i]) {
			printf("입력된 문자열이 다릅니다.\n");
			getchar(); return 0;
		}
	}
	if (s1[i] != s2[i])
		printf("입력된 문자열이 다릅니다.\n");
	else
		printf("입력된 문자열이 같습니다.\n");
	getchar(); return 0;
}