#include <stdio.h>

int main() {
    int number,i,S;
      printf("Somme des N Nombres");
      scanf("%d",&number);
      S =0;
      for(i=1;i<=number;i++){
        S= S+i;
         printf(" %d ",i);
      }
       printf("\n= %d ",S);
   

    return 0;
}