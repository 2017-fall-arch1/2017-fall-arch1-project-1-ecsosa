 

#include <stdio.h>		/* for puts,  */
#include <stdlib.h> 		/* for malloc */
#include <assert.h>		/* for assert */
#include "BST.h"
#include <string.h>
#include <fcntl.h>

/* create a new list */
BST *bstAlloc(char *s)
{
  BST *root = (BST *)malloc(sizeof(BST));
  root->str = s;
  root->right = root->left = NULL;
  return root;
}

/* append a copy of str to end of list */
BST *insertT(BST *root, char *s)
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
  if(root==NULL){
    root = i;
  }
  else{
    if(strcmp(root->str,s)>0)
    root->left = insertT(root->left, s);
    else
    root->right =  insertT(root->right, s);

  }
  return root;
}

/* print all memebers of list */
void printT(BST *root)
{
  if(root!=NULL){
    printT(root->left);
    printf("%s\n",root->str);
    printT(root->right);
  }
}

//Print all elements in list
void WriteFileT(BST *root, FILE *f)
{
  if(root!=NULL){
    WriteFileT(root->left, f);
    fprintf(f,"%s\n", root->str);
    WriteFileT(root->right, f);
  }

}

//finds min value
BST *minValueT(BST *root){
  BST *current = root;

  while(root->left!=NULL)
   current = current->left;
  return current;
} 

//remove any value
BST *removeT(BST *root, char *key){
  if(root==NULL)
    return root;
  if(strcmp(root->str, key)<0){
    root->left=removeT(root->left, key);
  }
  else if (strcmp(root->str, key)>0){
    removeT(root->right, key);
    }
else{
  if(root->left==NULL){
    BST *temp = root-> right;
    free(root);
    return temp;
  }
  else if (root->right == NULL){
      BST *temp = root->left;
      free(root);
      return temp;
  }
      BST *temp = minValueT(root->right);
      root->str = temp->str;
      root->right = removeT(root->right, temp->str);
 }
  return root;
}
