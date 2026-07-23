# Binary Search Tree (C++)

Implementare de la zero a unui Binary Search Tree (BST) în C++

## Ce face

- `insert(val)` — inserează o valoare respectând regula BST (stânga < nod < dreapta)
- `search(val)` — caută o valoare, returnează true/false
- `print()` — afișează arborele vizual în terminal

## Concepte exersate

- Recursivitate (pattern: funcție publică simplă → funcție privată recursivă)
- Pointeri și structuri de date dinamice (Node* left, Node* right)
- Member initializer lists
- Diferența struct vs. class în C++

## Cum rulezi

\`\`\`bash
g++ -std=c++17 main.cpp -o bst
./bst
\`\`\`

## Status

🚧 În lucru — următoarele extensii planificate: ștergere de noduri, parcurgeri (inorder/preorder/postorder), vizualizare cu linii (stil `tree`).