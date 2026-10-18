
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    Node a, b, c, d;
    Node *head, *loc, *newNode, *ptr;

    a.data = 10;
    b.data = 20;
    c.data = 30;
    d.data = 40;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = nullptr;

    head = &a;
    loc = &b;

    newNode = new Node;
    newNode->data = 25;

    newNode->next = loc->next;
    loc->next = newNode;

    ptr = head;

    while (ptr != nullptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    delete newNode;
    return 0;
}
