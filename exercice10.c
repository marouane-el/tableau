#include <stdio.h>

int main() {
   int n,i,x;
        printf("entrer un nombre de votre choix : ");
        scanf("%d",&n);
        printf("entrer le nombrer a rechercher: ");
        scanf("%d",&x);
   int tab[n];
for(i=0;i<n;i++){ 
        printf("veuillez vous taper le t[%d]: ",i );
        scanf("%d",&tab[i]);
}
int cout = 0;

for(i=0;i<n;i++){ 
    if(x==tab[i])
    cout++;
}
if (cout>0)
 printf("le nombre existe %d ",cout);
 else 
 printf ("le nombre nexist pas");

    
 return 0;
}
