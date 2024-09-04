#include <stdio.h>
#include <stdlib.h>

//Challenge 2 : Saisie et Affichage des Éléments

int main(){
int i,n; // Nombre d elements du tableau
printf("entrer le nombre d element: ");
scanf("%d",&n);
int tab[n];

for (i=0;i<n;i++){
    printf("saisire la valeur:");
    scanf("%d",&tab[i]);}
for(i=0;i<n;i++)
printf("%d",tab[i]);
return 0;

}