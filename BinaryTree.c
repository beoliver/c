//
//  BinaryTree.c
//  
//
//  Created by Ben Oliver on 20/08/15.
//
//

#include "BinaryTree.h"
#include <stdio.h>
#include <stdlib.h>

struct NodeStruct {
    int value;
    struct NodeStruct* left;
    struct NodeStruct* right;
};

typedef struct NodeStruct node;

node* makeTree(int rootValue) {
    node* n = (node *) malloc(sizeof(node));
    n->value = rootValue;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void insert(node* current, int val) {
    node* n = (node*) malloc(sizeof(node));
    n->value = val;
    n->left  = NULL;
    n->right = NULL;
    while (1) {
        if (val <= current->value) {
            if (current->left != NULL) {
                current = current->left;
            } else {
                current->left = n;
                break;
            }
        } else {
            if (current->right != NULL) {
                current = current->right;
            } else {
                current->right = n;
                break;
            }
        }
    }
}


void printItems(node* current) {
    if (current->left != NULL) {
        printItems(current->left);
    }
    printf("%d ", current->value);
    if (current->right != NULL) {
        printItems(current->right);
    }
}



int main(void) {
    node* root = makeTree(10);
    insert(root, 5);
    insert(root, 7);
    insert(root, 12);
    insert(root, 20);
    insert(root, 6);
    insert(root, 15);
    printItems(root);
    printf("\n");
    // will print ordered sequence:
    // 5 6 7 10 12 15 20
}



