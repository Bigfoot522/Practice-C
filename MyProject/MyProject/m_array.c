#include <stdio.h>

int main(void) {
	// 다차원 배열 Multidimensional Array
	//int i; // □

	//int arr[5];
	// [0] [1] [2] [3] [4]

	//int arr2[2][5];
	// [0,0] [0, 1] [0, 2] [0, 3] [0, 4]
	// [1,0] [1, 1] [1, 2] [1, 3] [1, 4]

	//int arr3[4][2];

	//int arr4[3][3][3];

	int arr[5] = { 1, 2, 3, 4, 5 };
	int arr2[2][5] = { {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5} };
	int arr3[4][2] = { {1, 2}, {1, 2}, {1, 2}, {1, 2} };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("2차원 배열 (%d, %d) 의 값 : %d\n", i, j, arr3[i][j]);
		}
		printf("\n");
	}

	return 0;
}