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
  float prix;

printf("prix des achats :");
scanf("%f", &prix);
  //déterminer si réduction
    if (prix>=300.0) {
      prix = (0.95*prix);
    }
    printf("Le total à payer est de :%f",prix );
    return 0;
}
