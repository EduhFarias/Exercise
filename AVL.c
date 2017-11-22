#include <stdio.h>
#include <stdlib.h>
#include <AVL.h>

typedef struct binary_tree{
    int item;
    int h;
    struct binary_tree *left;
    struct binary_tree *right;
}BT;

int max(int x, int y){
    return (x > y) ? x : y;
}

int h(BT *bt){
    if(bt == NULL){
        return -1;
    } else return 1 + (max(h(bt->left), h(bt->right));
}

int balance_factor(BT *bt){
    if(bt->left != NULL && bt->right != NULL){
        return (bt->left->h - bt->right->h);
    } else if(bt->left != NULL){
        return (bt->left->h + 1);
    } else return (-bt->right->h - 1);
}

int is_balanced(BT *bt){
    int bf = (bt->left->h - bt->right->h);
    return ((-1 <= bt) && (bt <= 1));
}

BT* R_Right(BT *bt){
    BT *aux = NULL;
    if(bt->left != NULL && bt->right != NULL){
        aux = bt->left;
        bt->left = aux->right;
        aux->right = bt;
    }
    aux->h = h(aux);
    bt->h = h(bt);
    return aux;
}

BT* R_Left(BT *bt){
    BT *aux = NULL;
    if(bt->left != NULL && bt->right != NULL){
        aux = bt->right;
        bt->right = aux->left;
        aux->left = bt;
    }
    aux->h = h(aux);
    bt->h = h(bt);
    return aux;
}

BT* add(BT *bt, int item){
    if(bt == NULL){
        return createBT(item, NULL, NULL);
    } else if(bt->item > item){
        bt->left = add(bt->left, item);
    } else bt->right = add(bt->right, item);

bt->h = h(bt);
BT *aux = NULL;

if(balance_factor(bt) == 2 || balance_factor(bt) == -2){
    if(balance_factor == 2){
        aux = bt->left;
        if(balance_factor(aux) == -1){
            bt->left = R_Left(bt->left);
        }
        bt = R_Left(bt);
    } else if(balance_factor == -2){
        aux = bt->right;
        if(balance_factor(aux) == 1){
            bt->right = R_Right(bt->right);
        }
        bt = R_Right(bt);
    }
    return bt;
}
