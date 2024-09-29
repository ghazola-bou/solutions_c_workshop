#include <stdio.h>

int main()
{
    int T[5];
   int factorial, num;
    int i;

    printf("enter number: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("number %d: ", i);
        scanf("%d", &T[i]);
    }
    printf("somme de number :");
    scanf("%d",&factorial);

    for(i=0;i<num;i++){
        T[i]=T[i] *factorial;
    }
    for(i=0;i<num;i++)
    printf("Somme :%d \n", T[i]);


    return 0;
}