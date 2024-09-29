#include <stdio.h>
int num(int A ,int B){
    int result = A * B;
    return result;
}
int main(){
    int num1,num2;
    printf("nimber 1:");
    scanf("%d",&num1);
    printf("number 2:");
    scanf("%d",&num2);
    printf("%d x %d = %d",num1,num2,num(num1 , num2));



    return 0;
}