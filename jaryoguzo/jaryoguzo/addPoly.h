#pragma once
#define MAX(a,b) ((a>b)?a:b) // 더 큰거 출력...?
#define MAX_DEGREE 50

typedef struct {
	int degree;
	float coef[MAX_DEGREE];
} polynomial;						// polynomial = 다항식의

polynomial addPoly(polynomial A, polynomial B);
void printPoly(polynomial P);