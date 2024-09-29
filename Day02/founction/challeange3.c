#include <stdio.h>
int num(int A, int B){
    if(A>B)
    return A;
    else
    return B;
}

int main() {
    
   int num1,num2,max;
   printf("result number 1:");
   scanf("%d",&num1);
    printf("result number 2:");
   scanf("%d",&num2);
    max = num(num1,num2);
    printf("max =%d ",max);
    return 0;
}