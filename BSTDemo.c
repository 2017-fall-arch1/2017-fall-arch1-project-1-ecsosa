

#include <stdio.h>		/* for printf */
#include <stdlib.h>		/* for free() */
#include <string.h> 		/* for strlen */
#include "BST.h"		/* for list operations */


/* read no more than limit chars into s, return #chars read.  Doesn't include trailing \n */
int gets_n(char *s, int limit)	
{
  char *p = s;			/* for indexing into s */
  char c;
  if (fgets(s, limit, stdin)) {
    while ((c = *p) && c != '\n') /* scan p through s until 0 or \n */
      p++;
    if (c == '\n')		/* erase \n */
      *p = 0;
  }
  return (p - s);		/* #chars read (not including terminator or \n*/
}
 

int main()
{
  char buf[100];
  BST *lp = llAlloc("");	/* make empty list */

  printf("enter names");
  while (gets_n(buf, 100))	/* build list */
    insertT(lp, buf);

  printT(lp);


  printf("I wish to remove...");
  char temp[100];
  fgets(temp,100,stdin);

    removeT(lp, temp);

    printT(lp);


  return 0;
}
