#include <stdio.h>

void signe(int A, int B)
{
    if (A * B)
    {
        printf("la valor de A et B la valor de singe \n ;");
    }
    else
    {
        printf("la valor no la mim singe \n");
    }
}

int minimun(int A, int B)
{
    int min;
    if (A > B)
        min = B;
    else
        min = A;
    return min;
}
int maximon(int A, int B)
{
    int max;
    if (A > B)
        max = A;
    else
        max = B;
}
int main()
{
    int max, min;
    int A, B;
    printf("saizer la valor de A :");
    scanf("%d", &A);
    printf("saizer la valor de B :");
    scanf("%d", &B);

    signe(A, B);
    min = minimun(A, B);
    max = maximon(A, B);
    printf("la valor minimale est :%d \n",min);
    printf("la valor maximale est :%d \n", max);

    return 0;
}
