#include <stdio.h>

int main() {
    int i,n,f;
    printf("choisir un nombre de casse: " );
    scanf("%d",&n);
    printf("le facteur: ");
    scanf("%d",&f);
    int tab[n];
    for(i=0;i<n;i++){
        printf("Valeur t[%d]:",i);
        scanf("%d",&tab[i]);
        }

    int r;

    for(i=0;i<n;i++){
        r= f*tab[i];
        printf("%d x %d = %d \n", f, tab[i], r);
    }


    return 0;
}
