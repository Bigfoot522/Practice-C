//#include <stdio.h>
//struct employee {
//	char name[10];
//	int year;
//	int pay;
//};
//
//int main_employe()
//{
//	int i;
//	struct employee Lee[4] = {
//		{"이진호", 2022, 5200},
//		{"이한영", 2023, 4300},
//		{"이상원", 2023, 4500},
//		{"이상범", 2024, 3900}
//	};
//
//	for (i = 0; i < 4; i++) {
//		printf("\n 이름 : %s", Lee[i].name);
//		printf("\n 입사 : %d", Lee[i].year);
//		printf("\n 연봉 : %d \n", Lee[i].pay);
//	}
//
//	getchar();
//}
//
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
//void main_employee() {
//	struct employee Lee;
//	struct employee* Sptr = &Lee;
//	strcpy(Sptr->name, "이순신");
//	Sptr->year = 2023;
//	Sptr->pay = 6900;
//
//	printf("\n 이름 : %s", Sptr->name);
//	printf("\n 입사 : %d", Sptr->year);
//	printf("\n 연봉 : %d", Sptr->pay);
//}