#include <stdio.h>
void main_array() {
	/*char c, c_array[100];
	int i, i_array[100];
	short s, s_array[100];
	float f, f_array[100];
	long l, l_array[100];

	printf("\n char c ũ�� = %d \t: char c_array ũ�� = %4d", sizeof(c), sizeof(c_array));
	printf("\n int i ũ�� = %d \t: int i_array ũ�� = %4d", sizeof(i), sizeof(i_array));
	printf("\n short s ũ�� = %d \t: short s_array ũ�� = %4d", sizeof(s), sizeof(s_array));
	printf("\n float f ũ�� = %d \t: float f_array ũ�� = %4d", sizeof(f), sizeof(f_array));
	printf("\n long l ũ�� = %d \t: long l_array ũ�� = %4d", sizeof(l), sizeof(l_array));*/


	/*int i;
	int score[3] = { 91, 86, 97 };
	char grade[3] = { 'A','B','A' };

	printf("\n *** �г⺰ ��� ���� *** \n\n");

	for (i = 0; i < 3; i++) {
		printf("%3d�г� : ���� = %d, ��� : %c\n", i + 1, score[i], grade[i]);
	}*/

	/*int i = 0, n;
	int multiply[9];

	printf("\n1~9������ ������ �Է��ϼ��� : ");

	while (1) {
		scanf_s("%d", &n);
		if (n < 0 || n>9)
			printf("\n1~9������ ������ �Է��ϼ��� :");
		else
			break;
	}

	printf("\n");
	for (i = 0; i < 9; i++) {
		multiply[i] = n * (i + 1);
		printf(" %d * %d = %d \n", n, (i + 1), multiply[i]);
	}*/

	/*int i;
	char str[10] = "string";
	for (i = 0; str[i]; i++) {
		printf("%c", str[i]);
	}*/

	/*int i, length = 0;
	char str[50];
	printf("\n���ڿ��� �Է��ϼ��� : ");
	gets(str);
	printf("\n�Էµ� ���ڿ��� \"");
	for (i = 0; str[i]; i++) {
		printf("%c", str[i]);
		length += 1;
	}
	printf("\" \n�Դϴ�.");
	printf("\n\n�Էµ� ���ڿ��� ���� = %d \n", length);*/

	/*int array[2][3][4];
	int i, j, k, value = 1;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 4; k++) {
				array[i][j][k] = value;
				printf("\n array[%d][%d][%d] = %d", i, j, k, array[i][j][k]);
				value++;
			}
		}
	}*/

	/*int i, j, k;
	char student[2][3][20];
	for (i = 0; i < 2; i++) {
		printf("\n �л� %d�� �̸� : ", i + 1);
		gets(student[i][0]);
		printf(" �л� %d�� �а� : ", i + 1);
		gets(student[i][1]);
		printf(" �л� %d�� �й� : ", i + 1);
		gets(student[i][2]);
	}

	for (i = 0; i < 2; i++) {
		printf("\n\n �л� %d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; student[i][j][k] != '\0'; k++)
				printf("%c", student[i][j][k]);
		}
	}*/

	getchar(); // ����â�� ������ �ʰ� �ϱ� ���� ���ǻ� �߰��� �Է� ��� ����
}