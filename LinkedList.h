//
// Created by Eduardo on 13/08/2017.
//

#ifndef EXERCISE_LINKEDLIST_H
#define EXERCISE_LINKEDLIST_H
/*
    LinkedList.h
    TAD para representar uma Lista Encadeada.
 */

typedef struct node Node;

Node* createLinkedList();

Node* insertNodeHead(Node *node, int item);

Node* insertNodeTail(Node *head, int item);

void printLinkedList(Node *head);

int isEmpty(Node *head);

Node* search(Node *head, int item);

Node* removeNode(Node *head, int item);

//Função que verifica se a lista B é um subconjunto da lista A
void check(Node *A, Node *B);

#endif //EXERCISE_LINKEDLIST_H
