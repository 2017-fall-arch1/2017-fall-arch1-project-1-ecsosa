

#include <stdio.h>		/* for puts,  */
#include <stdlib.h> 		/* for malloc */
#include <assert.h>		/* for assert */
#include "BST.h"		

int llDoCheck = 1;		/* set true for paranoid consistency checking */

#define doCheck(_lp) (llDoCheck && llCheck(_lp))

/* create a new list */
BST *llAlloc()
{
  BST *lp = (BST *)malloc(sizeof(BST));
  lp->right = lp->left = 0;
  doCheck(lp);
  return lp;
}

/* append a copy of str to end of list */
void llPut(BST *lp, char *s)
{
  int len;
  char *scopy;
  LLItem *i;

  doCheck(lp);
  /* w = freshly allocated copy of putWord */
  for (len = 0; s[len]; len++) /* compute length */
    ;
  scopy = (char *)malloc(len+1);
  for (len = 0; s[len]; len++) /* copy chars */
    scopy[len] = s[len];
  scopy[len] = 0;			/* terminate copy */


  /* i = new item containing s */
  i = (LLItem *)malloc(sizeof(LLItem));
  i->str = scopy;
  i->next = 0;


  /* append to end of list */
  if (lp->left||lp->right) {			/* list not empty */
    if(lp->(int)str>(int)s)
      lp->right = llPut(lp->right, data);
    else
      lp->left = llPut(lp->left, data);
  }
  else {			/* list empty */
    lp->right = i;
  }

  /* new item is last on list */
  lp->last = i;
  doCheck(lp);
}

/* print list membership.  Prints default mesage if message is NULL */
void llPrint(BST *lp, char *msg)
{
  LLItem *ip;
  int count = 1;
  doCheck(lp);
  puts(msg ? msg :" List contents:");
  for (ip = lp->first; ip; ip = ip->next) {
    printf("  %d: <%s>\n", count, ip->str);
    count++;
  }
}


////Needs remove
