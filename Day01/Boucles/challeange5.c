#include <stdio.h>

int main() {
   int base,exposant,S,i;
       printf("nombre entier base :");
       scanf("%d",&base);
        printf("nombre entier exposant :");
       scanf("%d",&exposant );
       S = 1;
       for(i=0;i<exposant ;i++){
        S*= base;

       }
        printf("%d^%d = %d \n",base,exposant,S);
   

    return 0;
}