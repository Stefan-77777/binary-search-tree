#ifndef BST_H
#define BST_H
#include <iostream>

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

    void printHelper(Node* node, int depth) {
        if (node == nullptr) {
            return;
        }
        
        printHelper(node->right, depth + 1);

        for (int i = 0; i < depth * 4; i++) {
            std::cout << " ";
        }
        std::cout << node->value << std::endl;

        printHelper(node->left, depth + 1);
    }

    Node* removeHelper(Node* node, int val) {
        if (node == nullptr) {
            return nullptr;
        }

        if (val < node->value) {
            node->left = removeHelper(node->left, val);
        } else if (val > node->value) {
            node->right = removeHelper(node->right, val);
        } else {

            // Caz 1: frunza (fara copii)
            if (node->left == nullptr && node->right == nullptr) {
                delete node;
                return nullptr;
            }

            // Caz 2: un singur copil
            if(node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            if(node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            // Caz 3: doi copii
            Node* succesor = findMin(node->right);
            node->value = succesor->value;
            node->right = removeHelper(node->right, succesor->value);
        }

        return node;
    }

    Node* findMin(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    void inorderHelper(Node* node) {
        if (node == nullptr) {
            return;
        }
        inorderHelper(node->left);
        std::cout << node->value << " ";
        inorderHelper(node->right);
    }

    void preorderHelper(Node* node) {
        if (node == nullptr) {
            return;
        }
        std::cout << node->value << " ";
        preorderHelper(node->left);
        preorderHelper(node->right);
    }

    void postorderHelper(Node* node) {
        if (node == nullptr) {
            return;
        }
        postorderHelper(node->left);
        postorderHelper(node->right);
        std::cout << node->value << " ";
    }

    void printTreeHelper(Node* node, std::string prefix, bool isLast) {
        if (node == nullptr) {
            return;
        }

        std::cout << prefix;
        std::cout << (isLast ? "└── " : "├── ");
        std::cout << node->value << std::endl;

        std::string childPrefix = prefix + (isLast ? "    " : "│   ");

        if (node->left != nullptr || node->right != nullptr) {
            if (node->left != nullptr) {
                printTreeHelper(node->left, childPrefix, node->right == nullptr);
            }
            if (node->right != nullptr) {
                printTreeHelper(node->right, childPrefix, true);
            }
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

    void print() {
        printHelper(root, 0);
    }

    void remove(int val) {
        root = removeHelper(root, val);
    }

    void printInorder() {
        std::cout << "Inordine: ";
        inorderHelper(root);
        std::cout << std::endl;
    }

    void printPreorder() {
        std::cout << "Preordine: ";
        preorderHelper(root);
        std::cout << std::endl;
    }

    void printPostorder() {
        std::cout << "Postordine: ";
        postorderHelper(root);
        std::cout << std::endl;
    }

    void printTree() {
        printTreeHelper(root, "", true);
    }
};

#endif