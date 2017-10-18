

#ifndef BST_included		/* prevent multiple inclusion */
#define BST_included


/* a linked-list item */
typedef struct BST {
  struct BST *right;
  struct BST *left;
  char *str;
  
} BST;

/* create a new list */
BST *llAlloc(char *s);

/* append a copy of str to end of list */
BST *insertT(BST *lp, char *s);

/* print list membership. */
void printT(BST *lp);

//returns min value
BST *minValueT(BST *lp);

BST *removeT(BST *lp, char *key);

#endif	/* included */




