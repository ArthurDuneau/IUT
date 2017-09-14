/*
CONTENU      : Modele de Programme
AUTEUR       : Arthur DUNEAU
CREATION     : 08/09/2017
MODIFICATION : 08/09/2017
*/

// librairies
#include <stdio.h>
#include <stdlib.h>


// corps du programme principal
int main (void)
{
const float PI = 3.14;
float p; //périmetre du cercle
float r;//rayon du cercle

printf("rayon du cercle :");
scanf("%f",&r);

//calcul du périmetre
p = 2.0 * PI * r;

printf("le périmetre du cercle est de %f" ,p);
    return 0;
}
