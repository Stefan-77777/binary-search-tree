# Binary Search Tree (C++)

Implementare de la zero a unui Binary Search Tree (BST) în C++, ca proiect de învățare
în cadrul pregătirii pentru Facultatea de Automatică și Calculatoare (UPB ACS).

## Ce face

- `insert(val)` — inserează o valoare respectând regula BST (stânga < nod < dreapta)
- `search(val)` — caută o valoare, returnează true/false
- `remove(val)` — șterge o valoare, tratând toate cele trei cazuri (frunză, un copil, doi copii)
- `print()` — afișează arborele rotit 90° în terminal (reverse inorder)
- `printTree()` — afișează arborele stil `tree` din Linux, cu `├──` / `└──`
- `printInorder()` / `printPreorder()` / `printPostorder()` — cele trei parcurgeri clasice
- Meniu interactiv în consolă pentru toate operațiile de mai sus

## Concepte exersate

- Recursivitate (pattern: funcție publică simplă → funcție privată recursivă)
- Pointeri și structuri de date dinamice (Node* left, Node* right)
- Gestionarea memoriei cu new/delete
- Member initializer lists
- Diferența struct vs. class în C++
- Trecerea obiectelor prin referință (BST&) între funcții
- Encoding UTF-8 în terminal Windows

## Cum rulezi

```bash
g++ -std=c++17 main.cpp -o bst
./bst
```

Programul afișează un meniu interactiv din care poți insera, căuta, șterge valori,
vizualiza arborele în două formate, și rula cele trei parcurgeri.

## Status

✅ Funcționalitate de bază completă — BST cu toate operațiile standard și meniu interactiv.

Posibile extensii viitoare: `height()`, `countNodes()`.