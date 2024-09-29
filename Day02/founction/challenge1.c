#include <stdio.h>
int num(int A, int B)
{
    int resault = A + B;
    return resault;
}

int main()
{
    int num1, num2, result;
    printf("num1");
    scanf("%d", &num1);
    printf("num2");
    scanf("%d",&num2);
    

    printf("%d +%d =%d", num1, num2, num(num1 , num2));

    return 0;
}
