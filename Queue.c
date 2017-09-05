#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

typedef struct node{
  int item;
  struct node *next;
}Node;

typedef struct queue{
  Node *head;
  Node *tail;
}Queue;

Queue* createQueue(){
  Queue *new_queue = (Queue*) malloc(sizeof(Queue));
  new_queue->head = new_queue->tail = NULL;
  return new_queue;
}

void enqueue(Queue *queue, int item){
  Node *new_node = (Node*) malloc(sizeof(Node));
  new_node->item = item;
  new_node->next = NULL;
  if(isEmpty(queue)){
  queue->head = new_node;
  queue->tail = new_node;
  } else{
    queue->tail->next = new_node;
    queue->tail = new_node;
  }
}

int dequeue(Queue *queue){
  if(isEmpty(queue)){
  printf("Queue underflow");
  return -1;
} else{
  Node *tmp = queue->head;
  int dequeue = queue->head->item;
  queue->head = tmp->next;
  if(queue->head == NULL) queue->tail = NULL;
  free(tmp);
  return dequeue;
}

int isEmpty(Queue *queue){
  return (queue->tail == NULL)
}
