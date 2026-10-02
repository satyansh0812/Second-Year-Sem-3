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

    do {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != head);
}

void push(Node*& head, Node*& rear, int value) {
    Node* newNode = new Node(value);
    if(rear == nullptr) {
        head = newNode;
        rear = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
    }
    else {
        newNode->prev = rear;
        newNode->next = head;

        rear->next = newNode;
        head->prev = newNode;

        rear = newNode;
    }
}

void pop(Node*& head, Node*& rear) {
    if(head == nullptr) {
        cout << "Circular Queue is empty" << endl;
        return;
    }
    else if(head == rear) {
        delete head;
        head = nullptr;
        rear = nullptr;
    }
    else {
        Node* temp = head;
        head = head->next;
        head->prev = rear;
        rear->next = head;
        delete temp;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements to be pushed into the circular queue: ";
    cin >> n;

    Node* head = nullptr;
    Node* rear = nullptr;

    cout << "Enter the elements: ";
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        push(head, rear, x);
        
    }

    cout << "Circular queue: ";
    display(head);

    pop(head, rear);
    cout << "\nCircular queue after popping an element: ";
    display(head);
}