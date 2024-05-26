//#include <stdio.h>
//void main_array() {
//	char c, c_array[100];
//	int i, i_array[100];
//	short s, s_array[100];
//	float f, f_array[100];
//	long l, l_array[100];
//
//	printf("\n char c 크기 = %d \t: char c_array 크기 = %4d", sizeof(c), sizeof(c_array));
//	printf("\n int i 크기 = %d \t: int i_array 크기 = %4d", sizeof(i), sizeof(i_array));
//	printf("\n short s 크기 = %d \t: short s_array 크기 = %4d", sizeof(s), sizeof(s_array));
//	printf("\n float f 크기 = %d \t: float f_array 크기 = %4d", sizeof(f), sizeof(f_array));
//	printf("\n long l 크기 = %d \t: long l_array 크기 = %4d", sizeof(l), sizeof(l_array));
//
//
//	int i;
//	int score[3] = { 91, 86, 97 };
//	char grade[3] = { 'A','B','A' };
//
//	printf("\n *** 학년별 취득 학점 *** \n\n");
//
//	for (i = 0; i < 3; i++) {
//		printf("%3d학년 : 총점 = %d, 등급 : %c\n", i + 1, score[i], grade[i]);
//	}
//
//	int i = 0, n;
//	int multiply[9];
//
//	printf("\n1~9사이의 정수를 입력하세요 : ");
//
//	while (1) {
//		scanf_s("%d", &n);
//		if (n < 0 || n>9)
//			printf("\n1~9사이의 정수를 입력하세요 :");
//		else
//			break;
//	}
//
//	printf("\n");
//	for (i = 0; i < 9; i++) {
//		multiply[i] = n * (i + 1);
//		printf(" %d * %d = %d \n", n, (i + 1), multiply[i]);
//	}
//
//	int i;
//	char str[10] = "string";
//	for (i = 0; str[i]; i++) {
//		printf("%c", str[i]);
//	}
//
//	int i, length = 0;
//	char str[50];
//	printf("\n문자열을 입력하세요 : ");
//	gets(str);
//	printf("\n입력된 문자열은 \"");
//	for (i = 0; str[i]; i++) {
//		printf("%c", str[i]);
//		length += 1;
//	}
//	printf("\" \n입니다.");
//	printf("\n\n입력된 문자열의 길이 = %d \n", length);
//
//	int array[2][3][4];
//	int i, j, k, value = 1;
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			for (k = 0; k < 4; k++) {
//				array[i][j][k] = value;
//				printf("\n array[%d][%d][%d] = %d", i, j, k, array[i][j][k]);
//				value++;
//			}
//		}
//	}
//
//	int i, j, k;
//	char student[2][3][20];
//	for (i = 0; i < 2; i++) {
//		printf("\n 학생 %d의 이름 : ", i + 1);
//		gets(student[i][0]);
//		printf(" 학생 %d의 학과 : ", i + 1);
//		gets(student[i][1]);
//		printf(" 학생 %d의 학번 : ", i + 1);
//		gets(student[i][2]);
//	}
//
//	for (i = 0; i < 2; i++) {
//		printf("\n\n 학생 %d", i + 1);
//		for (j = 0; j < 3; j++) {
//			printf("\n\t");
//			for (k = 0; student[i][j][k] != '\0'; k++)
//				printf("%c", student[i][j][k]);
//		}
//	}
//
//	getchar(); // 실행창이 닫히지 않게 하기 위해 편의상 추가한 입력 대기 명령
//}