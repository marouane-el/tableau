#include <stdio.h>
#include <stdlib.h>
//Challenge 5 : Trouver le Minimum

int main(){
    int n,i,min;
    printf("entrer le nombre d element: ");
    scanf("%d",&n);

    int t[n];

    for(i=0;i<n;i++){
        printf("entrer la valeur: " );
        scanf("%d",&t[i]);
 
        if(i==0)
            min=t[0];
            
        if (min>t[i])
            min=t[i];
    }

    printf("le min et : %d \n",min);
    return 0;
}

