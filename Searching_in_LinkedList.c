
#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node a, b, c, d;
    struct Node *head, *ptr, *loc = NULL;

    int item = 50;

    a.data = 30;
    b.data = 10;
    c.data = 50;
    d.data = 20;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    head = &a;
    ptr = head;

    while (ptr != NULL) {
        if (ptr->data == item) {
            loc = ptr;
            break;
        }

        ptr = ptr->next;
    }

    if (loc != NULL)
        printf("Element found: %d", loc->data);
    else
        printf("Element not found");

    return 0;
}
