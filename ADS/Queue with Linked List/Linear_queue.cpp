#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

void display(Node* head) {
    Node* temp = head;
    if(temp == nullptr) {
        cout << "Queue is empty" << endl;
        return;
    }

    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void push(Node*& head, Node*& rear, int value) {
    Node* newNode = new Node(value);
    if(rear == nullptr) {
        head = newNode;
        rear = newNode;
    }
    else {
        rear->next = newNode;
        newNode->prev = rear;
        rear = newNode;
    }
}

void pop(Node*& head, Node*& rear) {
    if(head == nullptr) {
        cout << "Queue is empty" << endl;
        return;
    }
    else {
        Node* temp = head;
        head = head->next;
        if(head != nullptr) {
            head->prev = nullptr;
        }
        else {
            rear = nullptr;
        }
    }
}

int main() {
    int n;

    cout << "Enter the number of elements to be pushed into the queue: ";
    cin >> n;

    Node* head = nullptr;
    Node* rear = nullptr;

    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        push(head, rear, x);
    }

    cout << "Linear Queue: ";
    display(head);

    pop(head, rear);
    display(head);

    return 0;
}