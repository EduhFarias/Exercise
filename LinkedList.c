#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

Node* createLinkedList(){
    return NULL;
}
Node* insertNode(Node *head, int item){
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->item = item;
    new_node->next = head;
    return new_node;
}
void printLinkedList(Node *head){
    while(head != NULL){
        printf("%d\n", head->item);
        head = head->next;
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
    Node *previous = NULL;
    Node *current = head;
    while(current != NULL && current->item != item){
        previous = current;
        current = current->next;
    }
    if(current == NULL){
        return head;
    }
    if(previous == NULL){
        head = head->next;
    } else{
        previous->next = current->next;
    }
    free(current);
    return head;
