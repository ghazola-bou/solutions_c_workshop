#include <stdio.h>
int num(int A ,int B)
{
    if (A < B)
    {
        return A;
    }
    else
        return B;
}

int main()
{
    int num1, num2, min;
    printf("number 1:");
    scanf("%d", &num1);
    printf("number 2:");
    scanf("%d", &num2);
    min = num(num1, num2);
    printf("min : %d", min);

    return 0;
}