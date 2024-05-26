//#include <stdio.h>
//void main_pointer() {
//
//	int i = 10, j = 20;
//	int* ptr;
//	printf("\n i의 값 = %d \n j의 값 = %d", i, j);
//	printf("\n i의 메모리 주소(&i) = %u", &i);
//	printf("\n j의 메모리 주소(&j) = %u", &j);
//
//	ptr = &i;
//	printf("\n\n << ptr=&i 실행 >>");
//	printf("\n ptr의 메모리 주소(&ptr) = %u", &ptr);
//	printf("\n ptr의 값(ptr) = %u", ptr);
//	printf("\n ptr의 참조값(*ptr) = %d", *ptr);
//
//	ptr = &j;
//	printf("\n\n << ptr=&j 실행 >>");
//	printf("\n ptr의 메모리 주소(&ptr) = %u", &ptr);
//	printf("\n ptr의 값(ptr) = %u", ptr);
//	printf("\n ptr의 참조값(*ptr) = %d", *ptr);
//
//	i = *ptr;
//	printf("\n\n << i=*ptr 실행 >>");
//	printf("\n i의 값 = %d", i);
//
//	int i;
//	char string1[20] = "Dreams come true", string2[20], * ptr1, * ptr2;
//
//	ptr1 = string1;
//	printf("\n string1의 주소 = %u \t ptr1 = %u", string1, ptr1);
//	printf("\n string1 = %s \n ptr1 = %s", string1, ptr1);
//	printf("\n\n %s", ptr1 + 7);
//	ptr2 = &string1[7];
//	printf("\n %s \n\n", ptr2);
//
//	for (i = 16; i >= 0; i--) {
//		putchar(*(ptr1 + i));
//	}
//	for (i = 0; i < 20; i++) {
//		string2[i] = *(ptr1 + i);
//	}
//	printf("\n\n string1 = %s", string1);
//	printf("\n string2 = %s", string2);
//
//	*ptr1 = 'P';
//	*(ptr1 + 1) = 'e';
//	*(ptr1 + 2) = 'a';
//	*(ptr1 + 3) = 'c';
//	*(ptr1 + 4) = 'e';
//	printf("\n\n string1 = %s\n", string1);
//
//	int i;
//	char* ptrArray[4] = { {"Korea"}, {"Seoul"}, {"Mapo"}, {"152번지 2 / 3"} };
//	for (i = 0; i < 4; i++)
//		printf("\n %s", ptrArray[i]);
//
//	ptrArray[2] = "Jongno";
//	printf("\n\n");
//	for (i = 0; i < 4; i++)
//		printf("\n %s", ptrArray[i]);
//
//	char* ptrArray[2];
//	char** ptrptr;
//	int i;
//
//	ptrArray[0] = "Korea";
//	ptrArray[1] = "Seoul";
//
//	ptrptr = ptrArray;
//	printf("\n ptrArray[0]의 주소 (&ptrArray[0]) = %u", &ptrArray[0]);
//	printf("\n ptrArray[0]의 값 (ptrArray[0]) = %u", ptrArray[0]);
//	printf("\n ptrArray[0]의 참조값 (*ptrArray[0]) = %c", *ptrArray[0]);
//	printf("\n ptrArray[0]의 참조 문자열 (*ptrArray[0]) = %s \n", *ptrArray);
//
//	printf("\n ptrArray[1]의 주소 (&ptrArray[1]) = %u", &ptrArray[1]);
//	printf("\n ptrArray[1]의 값 (ptrArray[1]) = %u", ptrArray[1]);
//	printf("\n ptrArray[1]의 참조값 (*ptrArray[1]) = %c", *ptrArray[1]);
//	printf("\n ptrArray[1]의 참조 문자열 (*ptrArray[1]) = %s \n", *(ptrArray + 1));
//
//	printf("\n ptrptr의 주소 (&ptrptr) = %u", &ptrptr);
//	printf("\n ptrptr의 값 (ptrptr) = %u", ptrptr);
//	printf("\n ptrptr의 1차 참조값 (*ptrptr) = %u", *ptrptr);
//	printf("\n ptrptr의 2차 참조값 (**ptrptr) = %c", **ptrptr);
//	printf("\n ptrptr의 2차 참조 문자열 (**ptrptr) = %s", *ptrptr);
//
//	printf("\n\n *ptrArray[0] : ");
//	for (i = 0; i < 5; i++) {
//		printf("%c", *(ptrArray[0] + i));
//	}
//	printf("\n **ptrptr : ");
//	for (i = 0; i < 5; i++) {
//		printf("%c", *(*ptrptr + i));
//	}
//
//	printf("\n\n *ptrArray[1] : ");
//	for (i = 0; i < 5; i++) {
//		printf("%c", *(ptrArray[1] + i));
//	}
//	printf("\n **(ptrptr+1) : ");
//	for (i = 0; i < 5; i++) {
//		printf("%c", *(*(ptrptr + 1) + i));
//	}
//
//	getchar();
//}