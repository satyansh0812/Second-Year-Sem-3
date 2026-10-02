//WAP to find node count in binary tree
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* right;
    Node* left;

    Node(int value) {
        right = nullptr;
        left = nullptr;
        data = value;
    }
};

void tree(Node* &root, int val) {
    if(root == nullptr) {
        return;
    }
    else if(root->data < val) {
        if(root->right == nullptr) {
            root->right = new Node(val);
            return;
        }
        else {
            tree(root->right, val);
        }
    }
    else {
        if(root->left == nullptr) {
            root->left = new Node(val);
            return;
        }
        else {
            tree(root->left, val);
        }
    }
}

void display(Node* node) {
    if(node == nullptr) {
        return;
    }
    display(node->left);
    cout << node->data << " ";
    display(node->right);
}

void heightOfBST(Node* root, int &h) {
    int h1 = 0, h2 = 0;

    while(root->left != nullptr) {
        
    }
}

int main() {
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;

    vector<int>a(n);
    cout << "Enter elements: ";
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    Node* root = new Node(a[0]);
    Node* temp = root;
    for (int i=1; i<n; i++) {
        tree(temp, a[i]);
    }

    display(root);

    int height = 0;
    heightOfBST(root, height);
    cout << "Height of the given BST is: " << height << endl;
}