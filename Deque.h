//
// Created by Eduardo on 22/08/2017.
//


#ifndef EXERCISE_DEQUE_H
#define EXERCISE_DEQUE_H
/*
    Deque.h
    TAD para representar uma Fila dupla.
 */

typedef struct deque Deque;
 
Deque* createDeque();

void enqueueHead(Deque *queue, int item);

void enqueueTail(Deque *queue, int item);

int dequeueHead(Deque *queue);

int dequeueTail(Deque *queue);

int isEmpty(Deque *queue);

//http://www.inf.puc-rio.br/~inf1620/material/slides/capitulo12.PDF

#endif //EXERCISE_DEQUE_H
