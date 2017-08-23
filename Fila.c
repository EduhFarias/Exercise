#include <stdio.h>
#include <stdlib.h>
#include <Fila.h>

#define MAX_QUEUE_SIZE 10

typedef struct queue{
  int current_size;
  int head;
  int tail;
  int items[MAX_QUEUE_SIZE];
}Queue;
 
void createQueue(){
  Queue *new_queue = (Queue*) malloc(sizeof(Queue));
  new_queue->current_size = 0;
  new_queue->head = NULL;
  new_queue->tail = MAX_QUEUE_SIZE-1;
  return new_queue;
}

void enqueue(Queue *queue, int item){
  if(queue->current_size >= MAX_QUEUE_SIZE){
    printf("Queue overflow");
  } else{
    queue->tail = (queue->tail + 1) % MAX_QUEUE_SIZE;
    queue->items[queue->tail] = item;
    queue->current_size++;
  }
}

int dequeue(Queue *queue){
  if(isEmpty(queue)){
    printf("Queue underflow");
    return -1;
  } else {
    int dequeue = queue->items[queue->head];
    queue->head = (queue->head + 1) % MAX_QUEUE_SIZE;
    queue->current_size--;
    return dequeue;
  }
}

int isEmpty(Queue *queue){
  return (queue->item == NULL);
}
