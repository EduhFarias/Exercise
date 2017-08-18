#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

typedef struct node{
	char item;
	struct node *next;
}Node;

typedef struct stack{
	Node *top;
    int size;
}Stack;

Stack* createStack(){
	Stack *new_stack = (Stack*) malloc(sizeof(Stack));
	new_stack->top = NULL;
    	new_stack->size = 0;
	return new_stack;
}

Node* createNode(char item){
	Node* new_top = (Node*) malloc(sizeof(Node));
	new_top->item = item;
	new_top->next = NULL;
	return new_top;
}

void push(Stack *stack, char item){
	Node *new_top = createNode(item);
	new_top->next = stack->top;
	stack->top = new_top;
    	(stack->size)++;
}

char pop(Stack *stack){
	if(isEmpty(stack)){
		printf("Stack underflow");
		return '\0';
	} else{
		char x;
		Node * tmp = stack->top;
		stack->top = stack->top->next;
        	(stack->size)--;
		x = tmp->item;
		free(tmp);
		return x;
	}
}

char peek(Stack *stack){
	if(isEmpty(stack)){
		printf("Stack underflow");
		return '\0';
	} else{
		return stack->top->item;
	}
}

int isEmpty(Stack *stack){
	return (stack->size == 0);
}
