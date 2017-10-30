

#ifndef BST_included		/* prevent multiple inclusion */
#define BST_included


/* a linked-list item */
typedef struct BST {
  struct BST *right;
  struct BST *left;
  char *str;
  
} BST;

/* create a new list */
BST *bstAlloc(char *s);

/* append a copy of str to end of list */
BST *insertT(BST *root, char *s);

/* print elements */
void printT(BST *root);

//returns min value
BST *minValueT(BST *root);

//remove any element
BST *removeT(BST *root, char *key);

//write on text file
void WriteFileT(BST *root, FILE *f);

#endif	/* included */




