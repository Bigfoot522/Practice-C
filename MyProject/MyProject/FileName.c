#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int a, b, c = 0;
    int d[256], e[256], f[256];
    scanf_s("%d\n", &a);
    scanf_s("%d\n", &b);
    for (int i = 0; i < b; i++) {
        scanf_s("%d %d", &d[i], &e[i]);
        f[i] = d[i] * e[i];
    }
    for (int j = 0; j < b; j++) {
        c = c + f[j];
    }
    if (a == c)
        printf("YES");
    else
        printf("NO");
}