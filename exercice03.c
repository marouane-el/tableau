#include <stdio.h>
#include <stdlib.h>

//Challenge 3 : Somme des Éléments

int main(){
int n,i;
printf("entrer le nombre d element: ");
scanf("%d",&n);
int t[n];
int s=0;
for(i=0;i<n;i++){
    printf("saisie la valeur :");
    scanf("%d",&t[i]);
    s=s+t[i];}
    printf("la some total et : %d ",s);
}