#include <stdio.h>

int main() {
   int number,i;
      printf("Affichage des N Premiers Nombres Impairs :");
      scanf("%d",&number);

      for(i=1;i<=number;i++){
       if(i %2 != 0)
         printf("%d ",i);
      }
   

    return 0;
}