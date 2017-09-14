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
int dcent;
int dquatrecent;
int dquatre;
int annee;

printf("donnez l'année");
scanf("%d",&annee );

dcent = annee%100;
dquatrecent = annee%400;
dquatre = annee%4;
if ( ((dquatre==0 && dcent!=0) || dquatrecent==0))  {
  printf("l'année est bissextile");

} else {
  printf("l'année n'est pas bissextile");
}

    return 0;
}
