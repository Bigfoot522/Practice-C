//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//long int fact(int);
//
//void main() {
//	int n, result;
//	printf("\n ������ �Է��ϼ��� : ");
//	scanf("%d", &n);
//	result = fact(n);
//	printf("\n\n %d�� ���丮�� ���� %ld�Դϴ�.\n", n, result);
//	getchar(); getchar();
//}
//
//long int fact(int n) {
//	int value;
//	if (n <= 1) {
//		printf("\n fact(1) �Լ� ȣ��!");
//		printf("\n fact(1) �� 1 ��ȯ!!");
//		return 1;
//	}
//	else {
//		printf("\n fact(%d) �Լ� ȣ��!", n);
//		value = (n * fact(n - 1));
//		printf("\n fact(%d) ��  %ld ��ȯ!!", n, value);
//		return value;
//	}
//}

//#include <stdio.h>
//
//void hanoi(int n, int start, int work, int target);
//void main() {
//	hanoi(4, 'A', 'B', 'C');
//	getchar();
//}
//
//void hanoi(int n, int start, int work, int target) {
//	if (n == 1)
//		printf(" %c���� ���� %d��(��) %c�� �ű� \n", start, n, target);
//	else {
//		hanoi(n - 1, start, target, work);
//		printf(" %c���� ���� %d��(��) %c�� �ű� \n", start, n, target);
//		hanoi(n - 1, work, start, target);
//	}
//}