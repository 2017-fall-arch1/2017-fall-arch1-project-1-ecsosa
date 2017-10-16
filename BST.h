

#ifndef BST_included		/* prevent multiple inclusion */
#define BST_included


/* a linked-list item */
typedef struct LLItem_s {
  struct  LLItem_s *root; 
  char *str;
} Node;

/* a list of LLItems */
typedef struct {
  Node *right, *left;
} BST;

extern int llDoCheck;		/* set true for paranoid consistency checking */

/* create a new list */
BST *llAlloc();

/* free memory associated with a list, discarding all items it contains */
void llFree(BST *lp);

/* append a copy of str to end of list */
void llPut(BST *lp, char *s);

/* Delete all elements off of the list */
void llMakeEmpty(BST *lp);

/* print list membership.  Prints default mesage if message is NULL */
void llPrint(BST *lp, char *msg);

/* check llist consistency, always returns zero */
int llCheck(BST *lp);

#endif	/* included */



