//
// Created by Eduardo on 10/09/2017.
//

#ifndef EXERCISE_HEAP_H
#define EXERCISE_HEAP_H
/*
    Heap.h
    TAD para representar uma Heap.
 */

typedef struct heap Heap;

Heap* createHeap();

void* enqueue(Heap *heap, int item);

int dequeue(Heap *heap);

int getParentIndex(Heap *heap, int i);

int getLeftIndex(Heap *heap, int i);

int getRightIndex(Heap *heap, int i);

void max_heapify(Heap *heap, int item);

void min_heapify(Heap *heap, int item);

int item_of(Heap *heap, int item);

void heapsort(Heap *heap);

#endif //EXERCISE_HEAP_H
