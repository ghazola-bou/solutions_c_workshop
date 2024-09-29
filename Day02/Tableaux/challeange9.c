#include <stdio.h>
int main()
{
   
    int i;
    int num;
     int temp;
    printf("number :");
    scanf("%d", &num);
    int top[num];
    for (i = 0; i < num; i++)
    {
        printf("NUMBER%d ;", i + 1);
        scanf("%d", &top[i]);
    }

    
   
    for (i = 0; i < num; i++)
    {
      
        temp = top[i];
         top[i]=top[num];
         top[num]=temp;
    }
    while (0 < i)
    {
        printf("%d \n",top[i]);
        i--;
    }
    return 0;
}