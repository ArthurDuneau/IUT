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
int a;
int b;
int c;
int d;
int choix;

printf("valeur de a :");
scanf("%d",&a );

printf("valeur de b :");
scanf("%d",&b );
c = a+b;
d = a*b;

printf("choix 1, 2, 3 ou 4 :");
scanf("%d",&choix );


    return 0;
}
