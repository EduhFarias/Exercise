//
// Created by Eduardo on 13/08/2017.
//

#ifndef EXERCISE_LINKEDLIST_H
#define EXERCISE_LINKEDLIST_H
/*
    LinkedList.h
    TAD para representar uma Lista Encadeada.
 */
typedef struct node{
    int item;
    int *next;
}Node;
Node* createLinkedList();
Node* insertNode(Node *node, int item);
void printLinkedList(Node *first);
int isEmpty(Node *first);
Node* search(Node *first, int item);
Node* removeNode(Node *first, int item);
#endif //EXERCISE_LINKEDLIST_H
