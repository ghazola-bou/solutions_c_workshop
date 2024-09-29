#include <stdio.h>

int main()
{

    int num, temp;
    printf("number :");
    scanf("%d", &num);
    int number[num];
    for (int i = 0; i < num; i++)
    {
        printf("number[%d]", i + 1);
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < num; i++)
    {

        for (int j = i +1; j < num; j++)
        {

            if (number[i] > number[j])
            {
                temp = number[j];
                number[j] = number[i];
                number[i] = temp;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("\n number[%d]=%d", i + 1, number[i]);
    }

    return 0;
} 