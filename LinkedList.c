#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

typedef struct node{
    int item;
    struct node *next;
}Node;

Node* createLinkedList(){
    return NULL;
}
Node* insertNodeHead(Node *head, int item){
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->item = item;
    new_node->next = head;
    return new_node;
}

Node* insertNodeTail(Node *head, int item){
    Node *new_node = (Node*) malloc(sizeof(Node));
    if(head == NULL){
        new_node->item = item;
        new_node->next = NULL;
        return new_node;
    } else{
        Node *n = head;
        while(n->next != NULL){
            n = n->next;
        }
        new_node->item = item;
        new_node->next = NULL;
        n->next = new_node;
        return head;
    }
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
}
// Exercício 1, da lista-Listas.
void check(Node *A, Node *B){
    while(B != NULL){
        while(A != NULL){
            if(B->item != A->item){
                printf("List B isn't subset of the list A\n");
                return;
            }
            A = A->next;
        }
        B = B->next;
    }
    printf("List B is a subset of the list A\n");
}
