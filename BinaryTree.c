#include <stdio.h>
#include <stdlib.h>
#include <BinaryTree.h>

typedef struct binary_tree{
  int item;
  struct binary_tree *left;
  struct binary_tree *right;
}BinaryTree;

BinaryTree* createEmptyBinaryTree(){
  return NULL;
}

BinaryTree* createBinaryTree(int item, BinaryTree *left, BinaryTree *right){
  BinaryTree *new_bt = (BinaryTree*) malloc(sizeof(BinaryTree));
  new_bt->item = item;
  new_bt->left = left;
  new_bt->right = right;
  return new_bt;
}

BinaryTree* add(BinaryTree *bt, int item){
  if(bt == NULL){
    bt = createBinaryTree(item, NULL, NULL);
  } else if(bt->item > item){
    bt->left =  add(bt->left, item);
  } else{
    bt->right = add(bt->right, item);
  }
  return bt;
}

BinaryTree* search(BinaryTree *bt, int item){
  if(bt == NULL || bt->item == item){
    return bt;
  } else if(bt->item > item){
      return search(bt->left, item);
  } else{
    return search(bt->right, item);
  }
}

void printInOrder(BinaryTree *bt){
  if(isEmpty(bt)){
    printInOrder(bt->left);
    printf("%d", bt->item);
    printInOrder(bt->right);
  }
}

void printPreOrder(BinaryTree *bt){
  if(isEmpty(bt)){
    printf("%d", bt->item);
    printPreOrder(bt->left);
    printPreOrder(bt->right);
  }
}

void printPostOrder(BinaryTree *bt){
  if(isEmpty(bt)){
    printPostOrder(bt->left);
    printPostOrder(bt->right);
    printf("%d", bt->item);
  }
}

int isEmpty(BinaryTree *bt){
  return (bt != NULL);
}

BinaryTree* remove(BinaryTree *bt, int item){
  //Concluir.
}
