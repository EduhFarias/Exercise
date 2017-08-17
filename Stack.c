#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

typedef struct node{
	int item;
	struct node *next;
}Node;

typedef struct stack{
	Node *top;
}Stack;

Stack* createStack(){
	Stack *new_stack = (Stack*) malloc(sizeof(Stack));
	new_stack->top = NULL;
	return new_stack;
}

Node* createNode(int item){
	Node* new_top = (Node*) malloc(sizeof(Node));
	new_top->item = item;
	new_top->next = NULL;
	return new_top;
}

void push(Stack *stack, int item){
	Node *new_top = createNode(item);
	new_top->next = stack->top;
	stack->top = new_top;
}

int pop(Stack *stack){
	if(isEmpty(stack)){
		printf("Stack underflow");
		return -9999;
	} else{
		int x;
		Node * tmp = stack->top;
		stack->top = stack->top->next;
		x = tmp->item;
		free(tmp);
		return x;
	}
}

int peek(Stack *stack){
	if(isEmpty(stack)){
		printf("Stack underflow");
		return -9999;
	} else{
		return stack->top->item;
	}
}

int isEmpty(Stack *stack){
	return (stack->top == NULL);
}
