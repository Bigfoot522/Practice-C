/*
#include <stdio.h>

int main(void)
{
	int age = 12;
	printf("%d\n", age);
	age = 13;				//int�� ��� ��
	printf("%d\n", age);

	float f = 46.5f;
	printf("%.1f\n", f); // .n���� �Ҽ��� �ڸ� �� ���� �� ����
	double d = 4.428;
	printf("%.2lf\n", d);

	const int YEAR = 2002;
	printf("%d\n", YEAR);

	int add = 3 + 7;
	printf("3 + 7 =	%d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);

	int input;
	printf("���� �Է��ϼ��� :");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);

	int one, two, three;
	printf("3���� ������ �Է��Ͻÿ� :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù ��° ���� : %d\n", one);
	printf("�� ��° ���� : %d\n", two);
	printf("�� ��° ���� : %d\n", three);

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);

	//������Ʈ
	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����԰� ���̿���?");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm �̿���?");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������?");
	scanf_s("%s", what, sizeof(what));
	
	//���� ���� ���

	printf("\n\n --- ������ ���� --- \n\n");
	printf(" �̸�		: %s\n", name);
	printf(" ����		: %d\n", age);
	printf(" ������     : %.2f\n", weight);
	printf(" Ű         : %.2lf\n", height);
	printf(" �˸�       : %s\n", what);

	return 0;
}
*/