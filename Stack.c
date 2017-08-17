#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

Stack* createStack(){
	Stack *new_stack = (Stack*) malloc(sizeof(Stack));
	new_stack->top = NULL;
	return new_stack;
}

void push(Stack *stack, int item){
	Node *new_top = (Node*) malloc(sizeof(Node));
	new_top->item = item;
	new_top->next = stack->top;
	stack->top = new_top;
}

int pop(Stack *stack){
	if(isEmpty(stack)){
		printf("Stack underflow");
		return -1;
	} else{
		Node *new_top = (Node*) malloc(sizeof(Node));
		Stack *current_stack = stack;
		new_top->next = stack->top;
		stack->top = new_top->next;
    -------
	}
}

int peek(Stack *stack){
	if(isEmpty(stack)){
		printf("Stack underflow");
	} else{
		-------
	}
}

int isEmpty(Stack *stack){
	return (stack == NULL);
}
