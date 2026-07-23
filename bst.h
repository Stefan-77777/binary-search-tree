#ifndef BST_H
#define BST_H

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* root;

    Node* insertHelper(Node* node, int val) {
        if(node == nullptr) {
            return new Node(val);
        }

        if(val < node->value) {
            node->left = insertHelper(node->left, val);
        } else if(val > node->value) {
            node->right = insertHelper(node->right, val);
        }

        return node;
    }

    bool searchHelper(Node* node, int val) {
        if (node == nullptr) {
            return false;
        }

        if (val == node->value) {
            return true;
        }

        if (val < node->value) {
            return searchHelper(node->left, val);
        } else {
            return searchHelper(node->right, val);
        }
    }
    
public:
    BST() : root(nullptr) {}

    void insert(int val) {
        root = insertHelper(root, val);
    }

    bool search(int val) {
        return searchHelper(root, val);
    }
};

#endif