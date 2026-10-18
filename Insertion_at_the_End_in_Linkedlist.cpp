
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {
    Node a, b, c;
    Node *head, *ptr, *newNode;

    a.data = 10;
    b.data = 20;
    c.data = 30;

    a.next = &b;
    b.next = &c;
    c.next = nullptr;

    head = &a;

    newNode = new Node;
    newNode->data = 40;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        ptr = head;

        while (ptr->next != nullptr) {
            ptr = ptr->next;
        }

        ptr->next = newNode;
    }

    ptr = head;

    while (ptr != nullptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    delete newNode;
    return 0;
}
