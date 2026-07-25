#include "bst.h"
#include <iostream>
#include <windows.h>

void displayMenu(BST &tree) {
    while (true) {
        std::cout << "\n== Print Tree menu ==" << std::endl;
        std::cout << "1. Print tree (sideways)" << std::endl;
        std::cout << "2. Print tree (lines)" << std::endl;
        std::cout << "0. Back to main menu" << std::endl;
        std::cout << "> ";

        int optiune;
        std::cin >> optiune;

        switch (optiune) {
            case 1:
                tree.print();
                break;
            case 2:
                tree.printTree();
                break;
            case 0:
                return;
            default:
                std::cout << "Invalid option." << std::endl;
        }
    }   
}

void traverseMenu(BST &tree) {
    while (true) {
        std::cout << "\n== Traverse Tree menu ==" << std::endl;
        std::cout << "1. Preorder" << std::endl;
        std::cout << "2. Inorder" << std::endl;
        std::cout << "3. Postorder" << std::endl;
        std::cout << "0. Back to main menu" << std::endl;
        std::cout << "> ";

        int optiune;
        std::cin >> optiune;

        switch (optiune) {
            case 1:
                tree.printPreorder();
                break;
            case 2:
                tree.printInorder();
                break;
            case 3:
                tree.printPostorder();
                break;
            case 0:
                return;
            default:
                std::cout << "Invalid option." << std::endl;
        }
    }   
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    BST tree;
    
    while (true) {
        std::cout << "\n== BST Operations Menu ==" << std::endl;
        std::cout << "1. Insert value" << std::endl;
        std::cout << "2. Search value" << std::endl;
        std::cout << "3. Remove value" << std::endl;
        std::cout << "4. Print tree" << std::endl;
        std::cout << "5. Traverse" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "> ";

        int optiune;
        std::cin >> optiune;

        switch (optiune) {
            case 1: {
                int val;
                std::cout << "Enter value to insert: ";
                std::cin >> val;
                tree.insert(val);
                break;
            }
            case 2: {
                int val;
                std::cout << "Enter value to search: ";
                std::cin >> val;
                if (tree.search(val)) {
                    std::cout << "The value exists." << std::endl;
                } else {
                    std::cout << "The value does not exist" << std::endl;
                }
                break;
            }
            case 3: {
                int val;
                std::cout << "Enter value to remove: ";
                std::cin >> val;
                tree.remove(val);
                break;
            }
            case 4: {
                displayMenu(tree);
                break;
            }
            case 5: {
                traverseMenu(tree);
                break;
            }
            case 0: {
                std::cout << "Exiting..." << std::endl;
                return 0;
            }
            default: {
                std::cout << "Invalid option." << std::endl;
                break;
            }
        }
    }

    return 0;
}