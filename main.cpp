#include "bst.h"
#include <iostream>

int main() {
    BST tree;
    tree.insert(8);
    tree.insert(3);
    tree.insert(10);    
    tree.insert(6);

    std::cout << tree.search(6) << std::endl;
    std::cout << tree.search(15) << std::endl;

    return 0;
}