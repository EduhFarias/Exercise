//
// Created by Eduardo on 15/08/2017.
//

#ifndef EXERCISE_DOUBLYLINKEDLIST_H
#define EXERCISE_DOUBLYLINKEDLIST_H
/*
    DoublyLinkedList.h
    TAD para representar uma Lista Duplamente Encadeada.
 */
typedef struct node{
    int item;
    struct node *next;
    struct node *previous;
}Node;
Node* createDoublyLinkedList();
Node* insertNode(Node *head, int item);
void printDoublyLinkedList_Foward(Node *head);
void printDoublyLinkedList_Backward(Node *tail);
int isEmpty(Node *head);
Node* search(Node *head, int item);
Node* removeNode(Node *head, int item);

#endif //EXERCISE_DOUBLYLINKEDLIST_H
