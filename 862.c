#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char item;
    int size;
    struct node *next;
}Node;

int list_size = 0;

Node* createLinkedList(){
    return NULL;
}

Node* insertNodeTail(Node *head, int item){
    Node *new_node = (Node*) malloc(sizeof(Node));
    if(head == NULL){
        new_node->item = item;
        new_node->next = NULL;
        new_node->size = list_size;
        list_size++;
        return new_node;
    } else{
        Node *n = head;
        while(n->next != NULL){
            n = n->next;
        }
        new_node->item = item;
        new_node->size = list_size;
        list_size++;
        new_node->next = NULL;
        n->next = new_node;
        return head;
    }
}

Node* clear(Node *head){
    Node *current = head, *aux, new_head;
    while(current)
    {
        aux = current;
        current = current->next;
        free (aux);
    }
     return NULL;
}

void check(Node *v){
    int begin, end, count, max_count, b;
    begin = end = count = max_count = 0;
    Node *aux = v;
    while(v){
        if(v->item == '0'){
            begin = aux->size;
            count++;
            if(count > max_count){
                b = begin;
                max_count = count;
                end = v->size;
            }
        } else{
            aux = aux->next;
            count = 0;
        }
        v = v->next;
    }
    printf("%d\n", count);
    printf("%d %d\n", b, end);
}

int main(){
    Node *a = createLinkedList();
    char tmp;   
    int i;
    
    while(scanf("%c", &tmp) != EOF){
        if(tmp == '\n'){
            check(a); 
            a = clear(a);
            list_size = 0;
            Node *a = createLinkedList();
        } else{
            a = insertNodeTail(a,tmp);
        }
    }
    return 0;
}
