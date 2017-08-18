//
// Created by Eduardo on 16/08/2017.
//


#ifndef EXERCISE_STACK_H
#define EXERCISE_STACK_H
/*
    Stack.h
    TAD para representar uma Pilha.
 */
 
typedef struct node Node;

typedef struct stack Stack;

Stack* createStack();

void push(Stack *stack, char item);

int compare(Stack *s, Stack *p);

char pop(Stack *stack);

char peek(Stack *stack);

int isEmpty(Stack *stack);

#endif //EXERCISE_STACK_H
