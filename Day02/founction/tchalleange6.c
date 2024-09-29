#include <stdio.h>

int main() {
    int R[] = {1,2,3,4,5,6};
    int size = sizeof(R) / sizeof(R[0]);
    int b = 2;


    for (int i = 0; i < 6; i++)
    {
        if (R[i] == b)
        {
            for (int j = i; j < 5; j++)
            {
                R[j] = R[j+1];
            }
            size--;
            break;
            
        }
    }

    for (int i = 0; i < size +1; i++)
    {
        printf("%d\n" , R[i]);
    }

    return 0;
}