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

char pop(Stack *stack);

char peek(Stack *stack);

int isEmpty(Stack *stack);
//Função que compara duas pilhas e retorna um booleano.
int compare(Stack *s, Stack *p, int size);
//Função que recebe um inteiro, converte para binário e o retorna em uma pilha.
Stack* convert(int number);

#endif //EXERCISE_STACK_H
