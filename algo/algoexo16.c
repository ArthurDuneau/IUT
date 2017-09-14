/*
CONTENU      : Modele de Programme
AUTEUR       : Arthur DUNEAU
CREATION     : 22/09/2013
MODIFICATION : 22/09/2013
*/

// librairies
#include <stdio.h>
#include <stdlib.h>


// corps du programme principal
int main (void)
{
int b50;
int b20;
int b10;
int b5;
int p2;
int p1;
int md;
 printf("Montant demandé \n");
 scanf("&d",&md );

 b50 = md / 50;
 md = md % 50;

 b20 = md / 20;
 md = md % 20;
 
 b10 = md / 10;
 md = md % 10;
 
 b5 = md / 5;
 md = md % 5;
 
 p2 = md / 2;
 md = md % 2;
 
 p1 = md /1;
 
printf("il faut rendre %d billets de 50€\n",b50);
printf("il faut rendre %d billets de 20€\n",b20);
printf("il faut rendre %d billets de 10€\n",b10);
printf("il faut rendre %d billets de 5€\n",b5);
printf("il faut rendre %d pièces de 2€\n",p2);
printf("il faut rendre %d pièces de 1€\n",p1);

    return 0;
}
