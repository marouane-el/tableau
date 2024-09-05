#include <stdio.h>

int main() {
    int i,n;
    printf("choisir un nombre de casse: " );
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
        printf("Valeur t[%d]:",i);
        scanf("%d",&tab[i]);}
    for(i=0;i<n;i++){
        if(tab[i]%2!=0)
        printf("nombre impair:%d\n",tab[i]);
    }
    

    return 0;
}