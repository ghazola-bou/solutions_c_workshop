#include <stdio.h>

int main() {
   int number,i,a;
   printf("Calcul de la Somme des N Entiers :");
   scanf("%d",&number);
   a = 0;
   for(i=1;i<=number;i++){
    a+= i;
    printf("%d ",i);
   } 
   printf("= %d",a);
    return 0;
}