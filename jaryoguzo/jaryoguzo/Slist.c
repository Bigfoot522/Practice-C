//#include <stdio.h>
//
//int main(void) {
//	int i, sale[4] = { 157, 209, 251, 312 };
//
//	for (i = 0; i < 4; i++) {
//		printf("\n address : %u sale[%d} = %d", &sale[i], i, sale[i]);
//	}
//	getchar(); return 0;
//}
//
//#include <stdio.h>
//
//int main(void) {
//	int i, n = 0, * ptr;
//	int sale[2][4] = { {63, 84, 140, 130}, {157, 209, 251, 312} };
//
//	ptr = &sale[0][0];
//	for (i = 0; i < 8; i++) {
//		printf("\n address : %u sale %d = %d", ptr, i, *ptr);
//		ptr++;
//	}
//}
//
//#include <stdio.h>
//
//int main(void) {
//	int i, n = 0, * ptr;
//	int sale[2][2][4] = { {{63, 84, 140, 130}, {157, 209, 251, 312}}, {{59, 80, 130, 135}, {149, 187, 239, 310}} };
//	ptr = &sale[0][0][0];
//	for (i = 0; i < 16; i++) {
//		printf("\n address: %u sale %2d = %3d", ptr, i, *ptr);
//		ptr++;
//	}
//	getchar(); return 0;
//}