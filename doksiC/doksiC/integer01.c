#include <stdio.h>

int main(void) {
	int a = 5;

	++a;
	printf("%d", a);

	a++;
	printf("%d", a);

	a--;
	printf("%d", a);

	--a;
	printf("%d", a);
	
	return 0;
}