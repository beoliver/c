//
//  linkedList.c
//  
//
//  Created by Ben Oliver on 19/08/15.
//
//

#include "linkedList.h"
#include <stdlib.h>
#include <stdio.h>


struct nodeStruct {
    int value;
    struct nodeStruct *next;
};

typedef struct nodeStruct node;


void insertValue(node* current, int value) {
    node* newNode = (node*) malloc(sizeof(node));
    newNode->value = value;
    newNode->next  = NULL;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void printValues(node* current) {
    printf("[");
    while (current->next != NULL) {
        printf("%d,",current->value);
        current = current->next;
    }
    printf("%d]\n",current->value);
}

int findValue(node* current, int val) {
    while (1) {
        if (current->value == val) {
            return 1;
        }
        if (current->next == NULL) {
            return 0;
        }
        current = current->next;
    }
}

int main(void) {

    // root is a pointer to the first 'node'
    node* root = (node*) malloc(sizeof(node));
    root->value = 1; // this is alternative syntax for "(*root).value = 1";
    root->next = NULL;
    
    insertValue(root, 2);
    insertValue(root, 3);
    insertValue(root, 4);
    
    printValues(root);
    
    printf("looking for 1... %d\n", findValue(root, 1));
    printf("looking for 3... %d\n", findValue(root, 3));
    printf("looking for 9... %d\n", findValue(root, 9));
    
    

}
