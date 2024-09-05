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
#include <stdio.h>

int main() {
    int n ,i;
    printf("entrer un bombre: ");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("la valeur t[%d] : ",i);
        scanf("%d",&tab[i]);
    }
    for(i=0;i<n;i++){
        printf("la valeur et t[%d]:%d \n",i,tab[i]);
    }