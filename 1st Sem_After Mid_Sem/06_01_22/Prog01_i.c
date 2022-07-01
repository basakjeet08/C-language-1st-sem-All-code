//Q1. 
#include <stdio.h>

void EvenOdd(int[]);
int main(){
    int arr_1880[10];
    int i;
    printf("Enter the Array Elements :----------- \n");
    for(i=0;i<10;i++){
        printf("[%d] : ",i);
        scanf("%d",&arr_1880[i]);

    }
    EvenOdd(arr_1880);
    return 0;
}
void EvenOdd(int x[]){

    for(int i = 0;i<10;i++){
        if(x[i]%2==0)
            printf("[%d] : %d is Even !\n",i,x[i]);
        else
            printf("[%d] : %d is Odd !\n",i,x[i]);
    }
}