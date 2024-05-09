#include <stdio.h>
#include "smTranspose.h"

int main_smTranspose(void) {		// a[0] 은 행렬 크기와 원소 수를 나타냄 ( 전체 행, 전체 열, 전체 원소 수)
	term a[] = { { 8,7,10 }, { 0,2,2 }, { 0,6,12 }, { 1,4,7 }, { 2,0,23 }, { 3,3,31 }, { 4,1,14 }, { 4,5,25 }, { 5,6,6 }, { 6,0,52 }, { 7,4,11 } };
	term b[sizeof(a) / sizeof(a[0])];
	int i;

	printf("<<희소행렬 a>>");
	for (i = 0; i <= a[0].value; i++)
		printf("\n[%3d, %3d, %3d ]", a[i].row, a[i].col, a[i].value);

	smTranspose(a, b);

	printf("\n\n<<희소행렬 b>>");
	for (i = 0; i <= b[0].value; i++)
		printf("\n[%3d, %3d, %3d ", b[i].row, b[i].col, b[i].value);

	getchar(); return 0;
}