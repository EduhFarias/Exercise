#ifndef EXERCISE_HASHTABLE_H
#define EXERCISE_HASHTABLE_H
/*
    HashTable.h
 */

typedef struct node Node;

Node* createDoublyLinkedList();

Node* insertNode(Node *head, int item);

void printDoublyLinkedList_Foward(Node *head);

void printDoublyLinkedList_Backward(Node *tail);

int isEmpty(Node *head);

Node* search(Node *head, int item);

Node* removeNode(Node *head, int item);

#endif //EXERCISE_HASHTABLE_H
