#include <stdio.h>
main(){
    int T[10];
    int i,min;
    printf("number :\n");
    for(i=0;i<10;i++){
        printf("min T[%d]:",i+1);
        scanf("%d",&T[i]);
    }

    min = T[0];
    for(i=0;i<10;i++){

    if(min >T[i])
        min=T[i];
    }
    printf("Somme des Elemment :%d",min);




    return =0;
}