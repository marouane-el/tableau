#include <stdio.h>
#include <stdlib.h>
//Challenge 4 : Trouver le Maximum

int main(){
int n,i,max;
printf("entrer le nombre d element: ");
scanf("%d",&n);
int t[n];
for(i=0;i<n;i++){
printf("entrer la valeur: " );
scanf("%d",&t[i]);
if (i==0)
max=t[0];
if (max<t[i])
    max=t[i];}

printf("le max et : %d \n",max);
    return 0;
}
