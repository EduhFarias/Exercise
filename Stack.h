//
// Created by Eduardo on 16/08/2017.
//


#ifndef EXERCISE_STACK_H
#define EXERCISE_STACK_H
/*
    Stack.h
    TAD para representar uma Pilha.
 */
 
typedef struct node{
	int item;
	struct node *next;
}Node;

typedef struct stack{
	Node *top;
}Stack;

Stack* createStack();

void push(Stack *stack, int item);

int pop(Stack *stack);

int peek(Stack *stack);

int isEmpty(Stack *stack);

#endif //EXERCISE_STACK_H
