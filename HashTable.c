#include <stdio.h>
#include <stdlib.h>
#include <HashTable.h>

#define MAX 10

typedef struct element{
  int key;
  int value;
  struct element *next;
}Element;

typedef struct hash_table{
  Element *table[MAX];
}HashTable;

HashTable* createHashTable(){
  HashTable *new_hash = (HashTable*) malloc(sizeof(HashTable));
  int i;
  for(i = 0; i < MAX; i++){
  new_hash->table[i] = NULL;
  }
  return new_hash;
}

void put(HashTable *ht, int key, int value){
  int h = key % MAX;
  Element *new_e = (Element*) malloc(sizeof(Element));
  new_e->key = key;
  new_e->value = value;
  new_e->next = NULL;
  if(ht->table[h] == NULL){
    ht->table[h] = new_e;
  } else{
    Element *start, *end;
    start = ht->table[h];
    while(start){
      end = start;
      start = start->next;
    }
    end->next = new_e;
}

int get(HashTable ht*, int key){
  int h = key % MAX;
  while(ht->table[h] != NULL){
    if(ht->table[h]->key == key){
      return ht->table[h]->value;
    }
    h = (h + 1) % MAX;
  }
  /*if(ht->table[h] == key) return ht->table[h]->value;
    else{
      Element *aux = ht->table[h]->next;
      while(aux){
        if(aux->next == key){
          return aux->value;
        }
        aux = aux->next;
      }
      return -1;
    }
  */
}

void remove(HashTable ht*, int key){
  int h = key % MAX;
  while(ht->table[h] != NULL){
    if(ht->table[h]->key == key){
      ht->table[h]->key = -1;
    }
    h = (h + 1) % MAX;
  }
}

int containsKey(HashTable ht*, int key){
  int h = key % MAX;
  while(ht->table[h] != NULL){
    if(ht->table[h]->key == key){
      return 1;
    }
  } return 0;
}

void printHashTable(HashTable *ht){
  int i;
  for(i = 0; i < MAX; i++){
    printf("%d\n", ht->table[i]->value);
  }
}
