/*
#include <stdio.h>

int main(void)
{
	int age = 12;
	printf("%d\n", age);
	age = 13;				//int가 없어도 됨
	printf("%d\n", age);

	float f = 46.5f;
	printf("%.1f\n", f); // .n으로 소수점 자리 수 정할 수 있음
	double d = 4.428;
	printf("%.2lf\n", d);

	const int YEAR = 2002;
	printf("%d\n", YEAR);

	int add = 3 + 7;
	printf("3 + 7 =	%d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);

	int input;
	printf("값을 입력하세요 :");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);

	int one, two, three;
	printf("3개의 정수를 입력하시오 :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 정수 : %d\n", one);
	printf("두 번째 정수 : %d\n", two);
	printf("세 번째 정수 : %d\n", three);

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);

	//프로젝트
	char name[256];
	printf("이름이 뭐에요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이에요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게가 몇이에요?");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm 이에요?");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요?");
	scanf_s("%s", what, sizeof(what));
	
	//조서 내용 출력

	printf("\n\n --- 범죄자 정보 --- \n\n");
	printf(" 이름		: %s\n", name);
	printf(" 나이		: %d\n", age);
	printf(" 몸무게     : %.2f\n", weight);
	printf(" 키         : %.2lf\n", height);
	printf(" 죄명       : %s\n", what);

	return 0;
}
*/