#include <stdio.h>
void main_pointer() {

	/*int i = 10, j = 20;
	int* ptr;
	printf("\n i�� �� = %d \n j�� �� = %d", i, j);
	printf("\n i�� �޸� �ּ�(&i) = %u", &i);
	printf("\n j�� �޸� �ּ�(&j) = %u", &j);

	ptr = &i;
	printf("\n\n << ptr=&i ���� >>");
	printf("\n ptr�� �޸� �ּ�(&ptr) = %u", &ptr);
	printf("\n ptr�� ��(ptr) = %u", ptr);
	printf("\n ptr�� ������(*ptr) = %d", *ptr);

	ptr = &j;
	printf("\n\n << ptr=&j ���� >>");
	printf("\n ptr�� �޸� �ּ�(&ptr) = %u", &ptr);
	printf("\n ptr�� ��(ptr) = %u", ptr);
	printf("\n ptr�� ������(*ptr) = %d", *ptr);

	i = *ptr;
	printf("\n\n << i=*ptr ���� >>");
	printf("\n i�� �� = %d", i);*/

	/*int i;
	char string1[20] = "Dreams come true", string2[20], * ptr1, * ptr2;

	ptr1 = string1;
	printf("\n string1�� �ּ� = %u \t ptr1 = %u", string1, ptr1);
	printf("\n string1 = %s \n ptr1 = %s", string1, ptr1);
	printf("\n\n %s", ptr1 + 7);
	ptr2 = &string1[7];
	printf("\n %s \n\n", ptr2);

	for (i = 16; i >= 0; i--) {
		putchar(*(ptr1 + i));
	}
	for (i = 0; i < 20; i++) {
		string2[i] = *(ptr1 + i);
	}
	printf("\n\n string1 = %s", string1);
	printf("\n string2 = %s", string2);

	*ptr1 = 'P';
	*(ptr1 + 1) = 'e';
	*(ptr1 + 2) = 'a';
	*(ptr1 + 3) = 'c';
	*(ptr1 + 4) = 'e';
	printf("\n\n string1 = %s\n", string1);*/

	/*int i;
	char* ptrArray[4] = { {"Korea"}, {"Seoul"}, {"Mapo"}, {"152���� 2 / 3"} };
	for (i = 0; i < 4; i++)
		printf("\n %s", ptrArray[i]);

	ptrArray[2] = "Jongno";
	printf("\n\n");
	for (i = 0; i < 4; i++)
		printf("\n %s", ptrArray[i]);*/

	char* ptrArray[2];
	char** ptrptr;
	int i;

	ptrArray[0] = "Korea";
	ptrArray[1] = "Seoul";

	ptrptr = ptrArray;
	printf("\n ptrArray[0]�� �ּ� (&ptrArray[0]) = %u", &ptrArray[0]);
	printf("\n ptrArray[0]�� �� (ptrArray[0]) = %u", ptrArray[0]);
	printf("\n ptrArray[0]�� ������ (*ptrArray[0]) = %c", *ptrArray[0]);
	printf("\n ptrArray[0]�� ���� ���ڿ� (*ptrArray[0]) = %s \n", *ptrArray);

	printf("\n ptrArray[1]�� �ּ� (&ptrArray[1]) = %u", &ptrArray[1]);
	printf("\n ptrArray[1]�� �� (ptrArray[1]) = %u", ptrArray[1]);
	printf("\n ptrArray[1]�� ������ (*ptrArray[1]) = %c", *ptrArray[1]);
	printf("\n ptrArray[1]�� ���� ���ڿ� (*ptrArray[1]) = %s \n", *(ptrArray + 1));

	printf("\n ptrptr�� �ּ� (&ptrptr) = %u", &ptrptr);
	printf("\n ptrptr�� �� (ptrptr) = %u", ptrptr);
	printf("\n ptrptr�� 1�� ������ (*ptrptr) = %u", *ptrptr);
	printf("\n ptrptr�� 2�� ������ (**ptrptr) = %c", **ptrptr);
	printf("\n ptrptr�� 2�� ���� ���ڿ� (**ptrptr) = %s", *ptrptr);

	printf("\n\n *ptrArray[0] : ");
	for (i = 0; i < 5; i++) {
		printf("%c", *(ptrArray[0] + i));
	}
	printf("\n **ptrptr : ");
	for (i = 0; i < 5; i++) {
		printf("%c", *(*ptrptr + i));
	}

	printf("\n\n *ptrArray[1] : ");
	for (i = 0; i < 5; i++) {
		printf("%c", *(ptrArray[1] + i));
	}
	printf("\n **(ptrptr+1) : ");
	for (i = 0; i < 5; i++) {
		printf("%c", *(*(ptrptr + 1) + i));
	}

	getchar();
}