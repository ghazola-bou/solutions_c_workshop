#include <stdio.h>
int A,B;
void salory(){
    printf("  saizer la valor de A:\n");
    scanf("%d",&B);
    printf("saizer la valor de A \n");
    scanf("%d",&A);
}
void signe(){
    if(A*B)
    printf("les valeurs de A et B on le mome signe :");
    else
    printf("les valeurs de A et B on le mome signe defult :");
}
int minimon(){
    int min;
    if(A>B)
        min =B;
        else 
        min =A;
        return min;
    
}

int maximon(){
    int max;
    if(A>B)
        max = B;
    else
    max = A;
}




int main(){

int max,min;
signe(A,B);
min = minimon(A,B);
max = maximon(A,B);
  printf("la valor minimale est :%d \n",min);
  printf("la valor maximale est :%d \n", max);








    return 0;
}