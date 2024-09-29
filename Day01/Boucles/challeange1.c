#include <stdio.h>

int main() {
    int number,i,A;
    printf("Calculez la multiplication de la table :");
    scanf("%d",&number);
    for(i=1;i<=10;i++){
        A = number*i;
        printf("%d x %d = %d \n",number,i,A);
    }
   

    return 0;
}