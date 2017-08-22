#include <stdio.h>
#include <stdlib.h>
#include <PriorityQueue.h>

typedef struct node{
  int item;
  int priority;
  struct node *next;
}Node;

typedef struct queue{
  struct node *head;
}PriorityQueue;
 
PriorityQueue* createPriorityQueue(){
  PriorityQueue *new_pq = (PriorityQueue*) malloc(sizeof(PriorityQueue));
  new_pq->head = NULL;
  return new_pq;
}

void enqueue(PriorityQueue *Priority_Queue, int a, int b){
  Node *new_node = (Node*) malloc(sizeof(Node));
  new_node->item = a;
  new_node->priority = b;
  if(isEmpty(Priority_Queue) || b > Priority_Queue->head->priority){
    new_node->next = Priority_Queue->head;
    Priority_Queue->head = new_node;
  } else{
    node *current = Priority_Queue->head;
    while(current->next != NULL && b < current->next->priority){
      current = current->next;
    }
    new_node->  next = current->next;
    current->next = new_node;
  }
}

Node* dequeue(PriorityQueue *Priority_Queue){
  if(isEmpty(Priority_Queue)){
    printf("Priority Queue underflow");
    return -1;
  } else{
    Node *node = Priority_Queue->head;
    Priority_Queue->head = Priority_Queue->head->next;
    node->next = NULL;
    //Retorna a cabeça da fila, mas não elimina ela. Necessário dar free após uso.
    return node;
  }
}

int isEmpty(PriorityQueue *Priority_Queue){
  return (Priority_Queue->head == NULL)
}

int maximum(PriorityQueue *Priority_Queue){
  if(isEmpty(Priority_Queue)){
    printf("Priority Queue underflow");
    return -1;
  } else return Priority_Queue->head->a;
}

int printPriorityQueue(PriorityQueue *Priority_Queue{
  while(Priority_Queue->head != NULL){
    printf("%d", Priority_Queue->head->item);
    Priority_Queue->head = Priority_Queue->head->next;
  }
}
