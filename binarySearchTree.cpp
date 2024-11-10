#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* left; 
    Node* right; 
};

Node* insertBST(Node* root, int data) {
    if (root == nullptr) {
        Node* new_node = new Node;
        new_node->data = data;
        new_node->left = nullptr;
        new_node->right = nullptr;
        return new_node;
    }

    if (data < root->data) {
        root->left = insertBST(root->left, data);
    } else {
        root->right = insertBST(root->right, data);
    }
    return root;
}

void inorderTraversal(Node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(Node* root) {
    if (root != nullptr) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of nodes to add to the Binary Search Tree: ";
    cin >> n;
    int d;

    Node* bstRoot = nullptr;

    // Insert nodes into the BST
    for (int i = 0; i < n; i++) {
        cin >> d;
        bstRoot = insertBST(bstRoot, d);
    }

    cout << "In-order traversal of the Binary Search Tree: ";
    inorderTraversal(bstRoot);
    cout << endl;

    cout << "Pre-order traversal of the Binary Search Tree: ";
    preorderTraversal(bstRoot);
    cout << endl;

    cout << "Post-order traversal of the Binary Search Tree: ";
    postorderTraversal(bstRoot);
    cout << endl;

    return 0;
}
