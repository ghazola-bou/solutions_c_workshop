#include <stdio.h>

int main() {
   int num,i;
    int A =0;
   printf("Compteur de Chiffres :");
   scanf("%d",&num);
   for(i=1;i<=num;i++){
    A = num +i; 
    printf("%d",i);
   }

   printf(" = %d ",num);
   

    return 0;
}