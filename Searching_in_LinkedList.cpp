
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    Node a, b, c, d;
    Node *head, *ptr, *loc = nullptr;

    int item = 50;

    a.data = 30;
    b.data = 10;
    c.data = 50;
    d.data = 20;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = nullptr;

    head = &a;
    ptr = head;

    while (ptr != nullptr) {
        if (ptr->data == item) {
            loc = ptr;
            break;
        }

        ptr = ptr->next;
    }

    if (loc != nullptr)
        cout << "Element found: " << loc->data;
    else
        cout << "Element not found";

    return 0;
}
