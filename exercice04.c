// affiche le plus grand élément dans un tableau d'entiers. Le programme doit demander le nombre d'éléments et les éléments du tableau.
#include <stdio.h>

int main() {
   int n,i,max;
// Le programme demande le nombre d'éléments
        printf("entrer un nombre de votre choix : ");
        scanf("%d",&n);
   int tab[n];
// Le programme demande les element de tableau
for(i=0;i<n;i++){ 
        printf("veuillez vous taper le t[%d]: ",i );
        scanf("%d",&tab[i]);
// affiche le plus grand élément dans un tableau
if (i==0)
   max=tab[0];
if (max<tab[i])
   max=tab[i];
}
        printf("le plus grand nombre et : %d \n",max);
 return 0;
}
