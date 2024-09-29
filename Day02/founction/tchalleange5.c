#include <stdio.h>
int num1,A;
void num(int n){
       int factoryal = 1;
       for(int i=1;i<=n;i++){
        factoryal *=i;
       }
       printf("factoryal : %d",factoryal);
}

int main() {
    int num1;
    printf("number 1 :");
    scanf("%d",&num1);

    num(num1);
    return 0;
}