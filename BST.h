

#ifndef BST_included		/* prevent multiple inclusion */
#define BST_included


/* a linked-list item */
typedef struct BST {
  struct BST *right;
  struct BST *left;
  char *str;
  
} BST;

extern int llDoCheck;		/* set true for paranoid consistency checking */

/* create a new list */
BST *llAlloc();

/* append a copy of str to end of list */
void insert(BST *lp, char *s);

/* print list membership.  Prints default mesage if message is NULL */
void print(BST *lp, char *msg);

#endif	/* included */




