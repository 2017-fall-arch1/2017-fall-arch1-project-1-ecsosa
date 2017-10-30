# arch1-linked-list-demo

All the work was done by me with help of the linked list classes provided by
the professor and geeksforgeeks.org/binary-search-tree-set-2-delete/ which helped me to figure out a way to remove from linked list.

The directory contains:

-code that implements a Binary Search Tree
-A demo program that uses it

The demo reads the lines from the user. Each line is stored in a binary search tree. After the lines are readed the lines are printed out in order. Then it asks for an element to remove. Parallely everything is stored in a text file.

The demo contains the following files:
-BST.h: header file of BST structure & "public" interface function BST.c: A demo program that uses the BST.

BST.c:
-BSTAlloc: creates a new BST
-insertT: insert elements in the right position given alphabetical order
-printT: print all elements in tree inorder
-minValue: essential for remove, returns smallest value
-remove: remove element