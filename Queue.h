//
// Created by Eduardo on 22/08/2017.
//


#ifndef EXERCISE_QUEUE_H
#define EXERCISE_QUEUE_H
/*
    Queue.h
    TAD para representar uma Fila, usando lista.
 */

typedef struct node Node;

typedef struct queue Queue;
 
void createQueue();

void enqueue(Queue *queue, int item);

int dequeue(Queue *queue);

int isEmpty(Queue *queue);

#endif //EXERCISE_QUEUE_H
