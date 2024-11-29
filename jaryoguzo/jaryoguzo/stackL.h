#pragma once
typedef int element;

typedef struct stackNode {
	element data;
	struct stackNode* link;
} stackNode;

stackNode* top;

int isStackEmpty1(void);
void push1(element item);
element pop1(void);
element peek1(void);
void printStack1(void);