#include "bst.h"
#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    BST tree;
    tree.insert(8);
    tree.insert(3);
    tree.insert(10);    
    tree.insert(1);
    tree.insert(6);
    tree.insert(14);
    tree.insert(4);
    tree.insert(7);

    // std::cout << tree.search(6) << std::endl;
    // std::cout << tree.search(15) << std::endl;

    tree.printTree();
    // tree.printInorder();
    // tree.printPreorder();
    // tree.printPostorder();

    return 0;
}