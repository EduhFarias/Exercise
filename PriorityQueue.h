//
// Created by Eduardo on 21/08/2017.
//


#ifndef EXERCISE_PRIORITYQUEUE_H
#define EXERCISE_PRIORITYQUEUE_H
/*
    PriorityQueue.h
    TAD para representar uma Fila de Prioridade.
 */

typedef struct node Node;

typedef struct queue PriorityQueue;
 
PriorityQueue* createPriorityQueue();

void enqueue(PriorityQueue *Priority_Queue, int a, int b);

Node* dequeue(PriorityQueue *Priority_Queue);

int isEmpty(PriorityQueue *Priority_Queue);

int maximum(PriorityQueue *Priority_Queue);

int printPriorityQueue(PriorityQueue *Priority_Queue);

#endif //EXERCISE_PRIORITYQUEUE_H
