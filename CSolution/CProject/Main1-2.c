// é�� 2

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[16] = { 0 };
	int age;

	printf("�̸��� ������?\r\n");
	scanf("%s", &name);

	printf("���̰� ��� �ǽ���?\r\n");
	scanf("%d", &age);

	printf("�̸�: %s\r\n����: %d", name, age);
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[16] = { 0 };
	int age;

	printf("�̸��� ���̸� �������� �����Ͽ� �Է��Ͻÿ�.\r\n");
	scanf("%s%d", name, &age);

	printf("�̸�: %s\r\n����: %d", name, age);
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;
	printf("�� ������ �������� �����Ͽ� �Է��ϼ���.\r\n");

	scanf("%d%d", &a, &b);

	int c = a * b;
		printf("�� ���� ���� %d�Դϴ�.", c);
}
*/
/*
	main�� ������ �ϳ�
	printf, scanf �Ѵ� ������������� scanf�� ȣ��Ǹ� ������� ȣ���� ���� ������ ��ٸ���.(=�Է��� ���������� ������ �����)
	%s �� ���ڿ� %d �� ���ڸ� ��Ÿ���⿡ ���� �����Ǵ� ������ ��ü �ȴ�.
	\0 ���ڿ��� ���� ǥ����
	\b �齺���̽�, Ŀ�� ��ġ���� ��ĭ �ڷ� �̵�
	\t �� ���
	\n �� �ٲ�, �� �� �Ѿ
	\r ĳ���� ����, Ŀ���� ���� ���� ���� ��ġ�� �ű�
	\" ū����ǥ ���
	\' ��������ǥ ���
	\\ �齽����(\) ���
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char input[128] = { 0 };

	printf("�Է�>");
	scanf("%[^\n]s", input);

	printf("���> %s", input);
}
*/
/*
scanf�� ���� ���ڿ��� ���������� "%[^\n]s"�� �����Ѵ�.
�̰��� �߰��� ����(����)�� �־ �ϳ��� �Է����� �ޱ� �����̴�.
�̿� ���� ���������ڴ� ���� �Է��� �����ϴ� �������� �� �ٲ޸� ����Ѵٴ� �ǹ��̴�.
*/
/*
1. Release, x64
2. $(SolutionDir)$(Platform)\$(Configuration)\
3. $(ProjectName)

$(SolutionDir) : �ַ�� ���͸��� ���մϴ�. �� D:\CProgramming\CSolution\�� �ǹ��մϴ�.
$(Platform) : 1.�� x64�� ��Ÿ���ϴ�. �� 64��Ʈ �ý����� �ǹ��մϴ�.
$(Configuration) : 1.�� Realease �� ��Ÿ���ϴ�.
$(ProfectName) : ������Ʈ �̸��� ���մϴ�.
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
	printf("�� ������ �������� �����Ͽ� �Է��ϼ���.\r\n");

	scanf("%d%d", &a, &b);

	int c1 = multiply(a, b);
	int c2 = add(a, b);
	int c3 = subtract(a, b);
	printf("��: %d\r\n��: %d\r\n��: %d", c1, c2, c3);
}
*/
/*
int a �� a ��� ������ �����Ѵٴ� �ǹ�
int *p �� �ּҸ� �����ϴ� ����
�׷��� �������� p = &s[0] ���� ������ �ּҰ��� �־�����Ѵ�. ...�³�?
*/

// p.79 �������� ��ļ��

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year;
	printf("��������� �Է��ϼ���\r\n");
	scanf("%d", &year);

	int a = year - 2001;
	printf("2002 ���� ������ ��� �ѱ� ���̴� %d�� �Դϴ�.", a);

}
*/

#include <stdio.h>

int main(void)
{
	int i;
	char s1[100] = { '\0' }, s2[100] = { '\0' };

	printf("ù��° ���ڿ� �Է� :");
	scanf_s("%s", s1);
	printf("�ι�° ���ڿ� �Է� :");
	scanf_s("%s", s2);

	for (i = 0; (s1[i] = '\0') & (s2[i] = '\0'); i++) {
		if (s1[i] != s2[i]) {
			printf("�Էµ� ���ڿ��� �ٸ��ϴ�.\n");
			getchar(); return 0;
		}
	}
	if (s1[i] != s2[i])
		printf("�Էµ� ���ڿ��� �ٸ��ϴ�.\n");
	else
		printf("�Էµ� ���ڿ��� �����ϴ�.\n");
	getchar(); return 0;
}