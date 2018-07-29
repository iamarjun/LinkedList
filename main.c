#include <stdio.h>
#include "linkedlist.h"

int main() {

    head = NULL;

    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    print(head);
    printf("\n");
    delete(3);
    print(head);
    printf("\n");
    delete(5);
    print(head);
    printf("\n");
    reverse();
    print(head);
    printf("\n");
    printrev(head);
    printf("\n");
    reverserecursive(head);

    return 0;
}