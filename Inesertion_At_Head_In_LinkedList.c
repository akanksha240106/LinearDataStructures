
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node a, b, c;
    struct Node *head, *newNode, *ptr;

    a.data = 10;
    b.data = 20;
    c.data = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    head = &a;

    newNode = malloc(sizeof(struct Node));

    if (newNode == NULL)
        return 1;

    newNode->data = 5;
    newNode->next = head;
    head = newNode;

    ptr = head;

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    free(newNode);
    return 0;
}
