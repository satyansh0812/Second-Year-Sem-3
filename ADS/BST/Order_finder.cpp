#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }

    void printPreorder(Node* node) {
        if (node == nullptr) {
            return;
        }
        cout << node->data << " ";
        printPreorder(node->left);
        printPreorder(node->right);
    }

    void printInorder(Node* node) {
        if (node == nullptr) {
            return;
        }
        printInorder(node->left);
        cout << node->data << " ";
        printInorder(node->right);
    }

    void printPostorder(Node* node) {
        if (node == nullptr) {
            return;
        }
        printPostorder(node->left);
        printPostorder(node->right);
        cout << node->data << " ";
    }
};

int main() {
    Node* root = new Node(100);
    root->left = new Node(20);
    root->right = new Node(200);
    root->left->left = new Node(10);
    root->left->right = new Node(30);
    root->right->left = new Node(150);
    root->right->right = new Node(300);

    cout << "Preorder Traversal: ";
    root->printPreorder(root);

    cout << endl;

    cout << "Inorder Traversal: ";
    root->printInorder(root);

    cout << endl;
    
    cout << "Postorder Traversal: ";
    root->printPostorder(root);
}