#include <bits/stdc++.h>
using namespace std;

class Node{
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

void display(Node* head){
    if(head == nullptr){
        cout << "Priority queue is empty" << endl;
        return;
    }
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

void push(Node*& head, int value) {
    Node* temp = head;
    Node* newnode = new Node(value);
    if(head == nullptr || head->data > value){
        newnode->next = head;
        head = newnode;
        return;
    }
    while(temp->next != nullptr && temp->next->data <= value){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
    
void pop(Node*& head){
    if(head == nullptr){
        cout<<"Priority queue is empty"<<endl;
        return;
    }
    if(head->next == nullptr){
        head = head->next;
        cout << "Priority queue is empty" << endl;
        return;
    }
    head = head->next;
}

int main() {
    int n;
    cout << "Enter the number of elements to be inserted in the priority queue: ";
    cin >> n;

    Node* head = nullptr;
    Node* rear = nullptr;

    cout << "Enter the elements: ";
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        push(head, x);
    }

    cout << "Elements in the priority queue: ";
    display(head);

    pop(head);
    cout << "Elements in the priority queue after popping: ";
    display(head);
}