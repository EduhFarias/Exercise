#include <stdio.h>
#include <stdlib.h>
#include <Heap.h>

#define MAX_SIZE 20

typedef struct heap {
  int size;
  int data[MAX_SIZE];
}Heap;

Heap* createHeap(){
  Heap *new_h = (Heap*) malloc(sizeof(Heap));
  new_h->size = 0;
  int i;
  for(i = 0; i < MAX_SIZE; i++){
    new_h->data[i] = NULL;
  }
  return new_h;
}

void* enqueue(Heap *heap, int item){
  if(head->size >= MAX_SIZE){
    printf("Heap overflow\n");
  } else{
    heap->data[++heap->size] = item;
    
    int key_index = heap->size;
    int parent_index = getParentIndex(heap->size);
    
    while(parent_index >= 1 && heap->data[key_index] > heap->data[parent_index]){
      swap(&heap->data[key_index], &heap->data[parent_index]);
      key_index = parent_index;
      parent_index = getParentIndex(heap, key_index);
    }
  }
}

int dequeue(Heap *heap){
  if(isEmpty(heap)){
    printf("Heap underflow\n");
    return -1;
  } else{
    int item = heap->data[1];
    heap->data[1] = heap->data[heap->size];
    heap->size--;
    max_heapify(heap, 1);
    return item;
  }
}

int getParentIndex(Heap *heap, int i){
  return i >> 1;
}

int getLeftIndex(Heap *heap, int i){
  return i << 1;
}

int getRightIndex(Heap *heap){
  return (i << 1) + 1;
}

void max_heapify(Heap *heap, int i){
  int largest;
  int rIndex = getRightIndex(heap, i);
  int lIndex = getLeftIndex(heap, i);
  
  if(lIndex <= heap->size && heap->data[lIndex] > heap->data[i]){
    largest = lIndex;
  } else largest = i;
  
  if(rIndex <= heap->size && heap->data[rIndex] > heap->data[i]){
    largest = rIndex;
  }
  
  if(heap->data[i] != heap->data[largest]){
    swap(&heap->data[i], &heap->data[largest]);
    max_heapify(heap, largest);
  }
}

void min_heapify(Heap *heap, int i){
  int smallest;
  int rIndex = getRightIndex(heap, i);
  int lIndex = getLeftIndex(heap, i);
  
  if(lIndex <= heap->size && heap->data[lIndex] < heap->data[i]){
    smallest = lIndex;
  } else smallest = i;
  
  if(rIndex <= heap->size && heap->data[rIndex] < heap->data[smallest]){
    smallest = rIndex;
  }
  
  if(heap->data[i] != heap->data[smallest]){
    swap(&heap->data[i], &heap->data[smallest]);
    min_heapify(heap, smallest);
  }
}

int item_of(Heap *heap, int i){
  return heap->data[i];
}

void heapsort(Heap *heap){
  int i;
  for(i = heap->size; i >= 2; i--){
    swap(&heap->data[1], &heap->data[i]);
    heap->size--;
    max_heapify(heap, 1);
  }
}
