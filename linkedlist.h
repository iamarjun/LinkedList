//
// Created by arjun on 2/26/18.
//

#include <stdlib.h>
#include <stdio.h>

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#endif //LINKEDLIST_LINKEDLIST_H

typedef struct Node{

    int data;
    struct Node* next;

} Node;

Node* head;


void insert(int x){

    //insert at the beginning

    Node* temp = (Node*) malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;


    //insert at nth position

    /*Node* temp1 = (Node*) malloc(sizeof(struct Node));
    temp1->data = x;
    temp1->next = NULL;

    if(n == 1){

        temp1->next = head;
        head = temp1;
        return;
    }

    Node* temp2 = head;

    for (int i = 0; i < n-2 ; ++i) {

        temp2 = temp2->next;

    }

    temp1->next = temp2->next;
    temp2->next = temp1;


    // insert at the end

    Node* temp = (Node*) malloc(sizeof(struct Node));

    temp->data = x;
    temp->next = NULL;

    if (head == NULL){

        temp->next = head;
        head = temp;

    } else {

        Node* temp1 = head;

        while(temp1->next != NULL){

            temp1 = temp1->next;
        }

        temp->next = temp1->next;
        temp1->next = temp;
    }*/


}

void delete(int n){

    Node* temp1 = head;

    if(n == 1){

        head = temp1->next;
        free(temp1);
        return;
    }

    for (int i = 0; i < n-2 ; ++i) {

        temp1 = temp1->next;
    }

    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}

void reverse(){

    Node* prev;
    Node* current;
    Node* next;

    current = head;
    prev = NULL;

    while (current != NULL){

        next = current->next;
        current->next = prev;
        prev = current;
        current = next;

    }

    head = prev;
}

void reverserecursive(Node* p){

    if (p->next == NULL){

        head = p;
        return;
    }

    reverserecursive(p->next);

    Node* q = p->next;
    q->next = p;
    //p->next->next = p;
    p->next = NULL;
}

void print(Node* p){

    if (p == NULL)
        return;

    printf("%d ", p->data);
    printrev(p->next);
}

void printrev(Node* p){

    if (p == NULL)
        return;

    printrev(p->next);
    printf("%d ", p->data);

}