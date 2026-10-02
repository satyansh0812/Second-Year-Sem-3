//Programming of array representation of linear queue
#include <bits/stdc++.h>
using namespace std;

int q[100];
int i = 0;
int j = 0;

void pop(){
    if(i == j){
        cout<<"Queue is empty"<<endl;
        return;
    }
    i++;
}

void push(int x){
    q[j] = x;
    j++;
}

void peek(){
    if(i == j){
        cout << "Queue is empty" << endl;
        return;
    }
    cout << q[i] << endl;
}

void display(){
    bool empty = true;
    for(int k=i; k<j; k++){
        if(q[k] != -1){
            cout << q[k] << "  ";
            empty = false;
        }
    }
    if(empty) {
        cout << "Queue is empty" << endl;
    }
}

int main() {
    for(int k=0; k<100; k++){
        q[k] = -1;
    }

    // int n;
    // cout << "Enter the number of elements to be pushed into the queue: ";
    // cin >> n;

    // cout << "Enter the elements: ";
    // for (int i=0; i<n; i++) {
    //     int x;
    //     cin >> x;
    //     push(x);
    // }

    // cout << "Your queue: ";
    // display();

    // cout << "\nTopmost element of the queue: ";
    // peek();

    // pop();

    // cout << "Queue after popping the topmost element: ";
    // display();

    push(1);
    push(2);
    push(3);
    display();
    cout << endl;
    pop();
    pop();
    pop();
    display();
}