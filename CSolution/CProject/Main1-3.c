// 챕터 3

/*
1비트는 0과1 중 하나를 표현할 수 있는 메모리공간
8비트 = 1바이트
부호가 있는 정수형, 부호가 없는 정수형, 실수형 등 수의 타입이 다 다르다.
예를 들어 1바이트에 부호가 있는 정수는 -128 ~ 127까지 저장할 수 있고 부호가 없는 정수는 0 ~ 255까지 저장할 수 있다.
*/
/*
변수란?
만날 장소를 알려줄 때 주소를 부르지 않고 건물 이름을 보통 불러준다.(ex. '우리 순천시 석현동 7에서 만나자!' 이러지 않는다는 말)
'간단하게 우리 자취방에서 보자!'라고 한다면 한번에 장소와 특징까지 파악이 쉬울 것이다.
이처럼 메모리의 특정영역 값을 읽거나 쓸 때도 주소를 그대로 사용하기 보단 이름을 붙이고 사용하는 편이 더 쉽고 편하다.
이렇게 이름 붙이고 읽고 쓸 수 있는 메모리 영역을 '변수'라고 한다.

변수명은 메모리 영역에 붙인 이름을 말하며 식별자이다.
변수명은 가능하면 알아보기 쉽게 짓는 것이 좋다. 또한 너무 길거나 짧은 것도 피할 것(good ex. name, age, year)
*/
/*
#include <stdio.h>

int main()
{
	int a;
	printf("a의 주소: %p", &a);
}
*/

// &p는 메모리주소를 출력하는 형식지정자로, 인자로 전달된 &a로 교체됩니다.

/*
#include <stdio.h>

int main()
{
	int a = 1; // 초기화: 변수 a의 정의와 함께 대입 연산자를 이용하여 특정한 값을 넣는 것
	a = 2;     // 대입: 이미 지정된 변수에 대입 연산자를 사용하여 값을 넣는 것
	printf("%d", a);
}
*/
/*
#include <stdio.h>
{
	char c;			1바이트 정수
	short s;		2바이트 정수
	int i;			4바이트 정수
	long long ll;	8바이트 정수
	float f;		4바이트 실수
	couble d;		8바이트 실수
}
*/
/*
# include <stdio.h>

int main()
{
	int a1, a2;
	int a3 = 1, a4;
	int a5 = 1, a6 = 2;		// 콤마를 통해 동시에 여러 변수도 정의 가능
}
*/
/*
타입 한정자 const
변수의 타입은 타입 지정자를 통해 결정된는데, 타입 한정자를 통해서 해당 타입에 추가적인 속성 지정 가능
const는 타입 한정자로서 const가 타입에 한정될 경우 해당 타입의 변수는 정의된 이후에 값을 추가로 대입할 수 없다.
그러므로 const변수는 고정된 값인 상수를 표시할 때 유용하다.
그리고 첫 정의와 함께 초기화(초기 값 설정)를 해야 한다.
const 또한 한 번에 여러 개의 정의가 가능하다.
*/
/*
#include <stdio.h>

int main()
{
	const int ci;
	ci = 1;			// 오류가 난다
}
*/
/*
타입 별칭 정의 typedef
typedef를 이용하면 타입의 별칭을 정의 할 수 있다.
typedef int bigfoot 하면 bigfoot은 int와 같아진다.
긴 타입을 하나로 줄일 때 사용한다.
*/

/*
#include <stdio.h>

int mainp()
{
	typedef const unsigned long long CULL;

	CULL c = 1;
	c = 2;		// 오류가 난다
}
*/
/*
#include <stdio.h>

int main()
{
	int a = 1, b = 2;
	int	c = a;
	a = b;
	b = c;						// 아 int는 변수공간을 만들 때 사용하고 그냥 대입할 땐 지정자가 필요없는건가?
	printf("%d%d%d", a, b, c);
}
*/
/*
char		-128 ~ 127	1바이트
short		-32,768 ~ 	2바이트
int			-20억 ~		4바이트
long long	- ~			8바이트
적절한 저장공간을 사용해야 효율을 높일 수 있다

unsigned char		0 ~	255		1바이트
unsigned short		0 ~ 65,535	2바이트
unsigned int		0 ~			4바이트
unsigned long long	0 ~			8바이트
부호없는 정수 타입
절대로 음수가 될 수 없는 상황에서 사용
*/
/*
#pragma warning (disable:4700)  // 오류를 무시하고 강제 실행
#include <stdio.h>

int mainp()
{
	int i1 = 3;
	int i2;

	printf("i1: %d\r\ni2: %d", i1, i2);
}
*/
/*
#include <stdio.h>

int mainp()
{
	int i;
	unsigned int ui;

	i = -999;
	ui = 777;

	printf("i : %d\r\nui : %d", i, ui);
}
*/
/*
#include <stdio.h>

int mainp()
{
	int i1 = 3.141592;
	int i2 = -3.141592;

	printf("i1: %d\r\ni2: %d", i1, i2);
}
*/
//정수가 아닌 실수를 정수로 변경하는 규칙은 소수점 이하를 그냥 버리기 이다.

// 오버플로우와 언더플로우


/*
#include <stdio.h>

int mainp()
{
	char c1 = 128;
	unsigned char c2 = -129;
	printf("c1: %d\r\nc2: %d", c1, c2);

	unsigned char uc1 = 256;
	unsigned char uc2 = -1;
	printf("\r\nuc1: %d\r\nuc2: %d", uc1, uc2);
}
*/
/*
만약 자동차 주행거리가 999,999km를 넘기게 된다면 어떻게 될까? 0km로 다시 돌아올 것이다.
이처럼 오버플로우와 언더플로우도 비슷한 원리로 127 다음은 -128이 나오게 된다.
헷갈리면 한번 실행시켜보는 것을 추천한다.
최대값에서 오버플로우가 발생하면 최소값이 되고
최소값에서 언더플로우가 발생하면 최대값이 된다.
*/
// 강남스타일 재현 - 유튜브가 조회수가 21억 이상 넘어갈 줄 모르고 변수 타입을 int로 만들었다가 강남스타일 조회수가 음수로 바뀐 적이 있다.
/*
#include <stdio.h>

int mainp()
{
	int hits1 = 2147483648;
	unsigned int hits2 = 4294967296;

	printf("hits1=%d, hits2=%d", hits1, hits2);
}
*/

// 확인문제

/*
#include <stdio.h>

int mainp()
{
	typedef unsigned int UNIT;
		UNIT a = 30;
		printf("%d", a);
}
*/

// 부호없는 정수형 타입의 최대값을 출력해보자

/*
#include <stdio.h>

int mainp()
{
	unsigned char uc = -1;
	unsigned short us = -1;
	unsigned int ui = -1;
	printf("uc: %u\r\nus: %u\r\nui: %u", uc, us, ui);  // 부호 없는 정수형 형식지정자는 %u를 사용한다.
}
*/
/*
실수형은 모든 수를 대표한다.
실수형 타입 정수형 타입은 대표적으로 float과 double이 있다.
실수형은 부호를 기준으로 따로 분류하지 않는다. 실수형 타입은 자체가 항상 부호를 포함하도록 구현되어있다.
float =	 4바이트
double = 8바이트
*/
/*
#include <stdio.h>
 
int mainp()
{
	int i = 33554434;
	float f = 33554434;

	printf("i: %d\r\nf: %f", i, f);  // 형식지정자 %f는 실수형 데이터를 출력한다.
}
*/

// 결과값이 2의 오차를 발생시키므로 정수형 데이터를 다룰때는 무조건 정수형 타입을 사용해야 한다.

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mainp()
{
	const double PI = 3.141592;
	double r;

	printf("반지름을 입력하세요.\r\n");
	scanf("%lf", &r);

	double len = PI * r * 2;
	double s = PI * r * r;
	printf("\r\n둘레: %f\t넓이: %f", len, s);
}

#include <stdio.h>
int mainp()
{
	char a = 65;
	printf("%c = %d\r\n", a, a);

	char b = 'B';
	printf("%c = %d", b, b);
}
*/