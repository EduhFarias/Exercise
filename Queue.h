//
// Created by Eduardo on 21/08/2017.
//


#ifndef EXERCISE_QUEUE_H
#define EXERCISE_QUEUE_H
/*
    Queue.h
    TAD para representar uma Fila, usando array.
 */

typedef struct queue Queue;
 
void createQueue();

void enqueue(Queue *queue, int item);

int dequeue(Queue *queue);

int isEmpty(Queue *queue);

#endif //EXERCISE_QUEUE_H
