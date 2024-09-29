#include <stdio.h>
main(){
    int T[10];
    int i,max;
    printf("number :\n");
    for(i=0;i<10;i++){
        printf("max T[%d]:",i+1);
        scanf("%d",&T[i]);
    }

    max = T[0];
    for(i=0;i<10;i++){

    if(max <T[i])
        max=T[i];
    }
    printf("Somme des Elemment :%d",max);
    return =0;
}