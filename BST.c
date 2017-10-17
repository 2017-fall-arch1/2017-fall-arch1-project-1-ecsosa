 

#include <stdio.h>		/* for puts,  */
#include <stdlib.h> 		/* for malloc */
#include <assert.h>		/* for assert */
#include "BST.h"
#include <string.h>

/* create a new list */
BST *llAlloc()
{
  BST *lp = (BST *)malloc(sizeof(BST));
  return lp;
}

/* append a copy of str to end of list */
void insert(BST *lp, char *s)
{
  int len;
  char *scopy;
  BST *i;

  /* w = freshly allocated copy of putWord */
  for (len = 0; s[len]; len++) /* compute length */
    ;
  scopy = (char *)malloc(len+1);
  for (len = 0; s[len]; len++) /* copy chars */
    scopy[len] = s[len];
  scopy[len] = 0;			/* terminate copy */


  /* i = new item containing s */
  i = (BST *)malloc(sizeof(BST));
  i->str = scopy;
  i->right = 0;
  i->left = 0;

  /* new item is last on list */
  if(lp==NULL)
    lp = i;
  else{
    if(strcmp(lp->str,s)>0)
     insert(lp->left, s);
    else
     insert(lp->right, s);
  }
}

/* print list membership.  Prints default mesage if message is NULL */
void print(BST *lp, char *msg)
{
  if(lp!=NULL){
    print(lp->left, msg);
    printf("%s\n",lp->str);
    print(lp->right,msg);
  }
}

void remove(BST *lp, char *key)
{
  if(lp==NULL)
    return lp;
  if(strcmp(lp->str, key)>0)
    deleteNode(root->left, key);


  ////Needs remove
