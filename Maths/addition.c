/*
CONTENU      : Modele de Programme
AUTEUR       : Arthur DUNEAU
CREATION     : 22/09/2013
MODIFICATION : 22/09/2013
*/

// librairies
#include <stdio.h>
#include <stdlib.h>

int addition(int n, int x)
{
    if(n > 0)
     x = addition(n - 1, x) + 1;
    else
     return x;
}


// corps du programme principal
int main (void)
{
  int n,x;
  printf("entrez n\n");
  scanf("%d",&n);
  printf("entrez x\n");
  scanf("%d",&x);

  printf("%d + %d = %d\n", n, x, addition(n,x));
  return 0;
}
