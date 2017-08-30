//
// Created by Eduardo on 30/08/2017.
//

#ifndef EXERCISE_BINARYTREE_H
#define EXERCISE_BINARYTREE_H
/*
    BinaryTree.h
    TAD para representar uma Árvore binária.
 */

typedef struct binary_tree BinaryTree;

BinaryTree* createEmptyBinaryTree();

BinaryTree* createBinaryTree(int item, BinaryTree *left, BinaryTree *right);

BinaryTree* add(BinaryTree *bt, int item);

BinaryTree* search(BinaryTree *bt, int item);

void printInOrder(BinaryTree *bt);

void printPreOrder(BinaryTree *bt);

void printPostOrder(BinaryTree *bt);

int isEmpty(BinaryTree *bt);

BinaryTree* remove(BinaryTree *bt, int item);

#endif //EXERCISE_BINARYTREE_H
