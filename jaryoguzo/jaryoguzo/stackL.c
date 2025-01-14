#include <stdlib.h>
#include "stackL.h"

int isStackEmpty1(void) {
	if (top == NULL) return 1;
	else return 0;
}

void push1(element item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));

	temp->data = item;
	temp->link = top;
	top = temp;
}

element pop1(element item) {
	stackNode* temp = top;

	if (isStackEmpty1()) {
		printf("\n\n Stack is empty !\n");
		return 0;
	}
	else {
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}

element peek1(void) {
	if (isStackEmpty()) {
		printf("\n\n Stack is empty !\n");
		return 0;
	}
	else {
		return(top->data);
	}
}

void printStack1(void) {
	stackNode* p = top;
	printf("\n STACK [ ");
	while (p) {
		printf("%d ", p->data);
		p = p->link;
	}
	printf("] ");
}