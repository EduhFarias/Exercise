#ifndef EXERCISE_HASHTABLE_H
#define EXERCISE_HASHTABLE_H
/*
    HashTable.h
 */

typedef struct element Element;
typedef struct hash_table HashTable;

HashTable* createHashTable();

void put(HashTable *ht, int key, int value);

int get(HashTable ht*, int key);

void remove(HashTable ht*, int key);

int containsKey(HashTable ht*, int key);

void printHashTable(HashTable *ht);

#endif //EXERCISE_HASHTABLE_H
