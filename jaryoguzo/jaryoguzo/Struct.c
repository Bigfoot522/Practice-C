//#include <stdio.h>
//struct employee {
//	char name[10];
//	int year;
//	int pay;
//};
//
//int main()
//{
//	int i;
//	struct employee Lee[4] = {
//		{"����ȣ", 2022, 5200},
//		{"���ѿ�", 2023, 4300},
//		{"�̻��", 2023, 4500},
//		{"�̻��", 2024, 3900}
//	};
//
//	for (i = 0; i < 4; i++) {
//		printf("\n �̸� : %s", Lee[i].name);
//		printf("\n �Ի� : %d", Lee[i].year);
//		printf("\n ���� : %d \n", Lee[i].pay);
//	}
//
//	getchar();
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct employee {
//	char name[10];
//	int year;
//	int pay;
//};
//
//void main() {
//	struct employee Lee;
//	struct employee* Sptr = &Lee;
//	strcpy(Sptr->name, "�̼���");
//	Sptr->year = 2023;
//	Sptr->pay = 6900;
//
//	printf("\n �̸� : %s", Sptr->name);
//	printf("\n �Ի� : %d", Sptr->year);
//	printf("\n ���� : %d", Sptr->pay);
//}