#include <stdio.h>

int main() {
   int number,i,A;
      printf(" Qu est-ce que le nombre multiplié :");
      scanf("%d",&number);
      A= 1;
      for(i=1;i<=number;i++)
        A*=i;
      
       printf("%d = %d \n",number,A);

    return 0;
}