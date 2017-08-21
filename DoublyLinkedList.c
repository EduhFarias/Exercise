#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

typedef struct node{
    int item;
    struct node *next;
    struct node *previous;
}Node;

Node* createDoublyLinkedList(){
    return NULL;
}
Node* insertNode(Node *head, int item){
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->item = item;
    new_node->next = head;
    new_node->previous = NULL;
    if(head != NULL){
        head->previous = new_node;
    }
    return new_node;
}
void printDoublyLinkedList_Foward(Node *head){
    while(head != NULL){
        printf("%d\n", head->item);
        head = head->next;
    }
}
void printDoublyLinkedList_Backward(Node *tail){
    while(tail != NULL){
        printf("%d\n", tail->item);
        tail = tail->previous;
    }
}
int isEmpty(Node *head){
    return (head == NULL);
}
Node* search(Node *head, int item){
    while(head != NULL){
        if(head->item == item){
            return head;
        }
        head = head->next;
    }
}
Node* removeNode(Node *head, int item){
    Node *current = head;
    while(current != NULL && current->item != item){
        current = current->next;
    }
    if(current == NULL) return head;

    if(head == current){
        head = current->next;
    } else{
        current->previous->next = current->previous;
    }

    if(current->next != NULL){
        current->next->previous = current->previous;
    }
    free(current);
    return head;
}
