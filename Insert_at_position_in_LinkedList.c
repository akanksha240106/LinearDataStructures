
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node a, b, c, d;
    struct Node *head, *loc, *newNode, *ptr;

    a.data = 10;
    b.data = 20;
    c.data = 30;
    d.data = 40;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    head = &a;
    loc = &b;

    newNode = malloc(sizeof(struct Node));

    if (newNode == NULL)
        return 1;

    newNode->data = 25;

    newNode->next = loc->next;
    loc->next = newNode;

    ptr = head;

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    free(newNode);
    return 0;
}
