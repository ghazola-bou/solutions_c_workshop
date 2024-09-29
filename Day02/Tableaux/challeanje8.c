#include <stdio.h>
int main()
{
    int top1[80];
    int top2[80];

    int i;
    int num;

    printf("number :");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("num %d", i + 1);
        scanf("%d", &top1[i]);
    }

    for (i = 0; i < num; i++)
    {
        top2[i] = top1[i];
    }
    printf("orijinale : ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", top1[i]);
    }
    printf("\n");

    printf("copie : ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", top2[i]);
    }
    return 0;
}