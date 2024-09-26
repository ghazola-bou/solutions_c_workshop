#include <stdio.h>

int main() {
     int number,A,i,number1;
     printf("Inversion d'un Entier :");
     scanf("%d",&number);
     A =1;
     for(i =0;i<4;i++){
        number1 = (number /A)%10;
        A *=10; 
        printf("%d",number1);
     }
   

    return 0;
}