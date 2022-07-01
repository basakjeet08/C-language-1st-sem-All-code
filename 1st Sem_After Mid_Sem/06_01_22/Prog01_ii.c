//Q1.ii.
#include <stdio.h>
void EvenOdd(int,int);
int main(){
    int arr_1880[10];
    int i;
    printf("Enter the Array Elements :----------- \n");
    for(i=0;i<10;i++){
        printf("[%d] : ",i);
        scanf("%d",&arr_1880[i]);

    }
    for(i=0;i<10;i++){
        EvenOdd(arr_1880[i],i);
    }
    return 0;
    
}
void EvenOdd(int x,int i){

    if(x%2==0)
        printf("[%d] : %d is Even !\n",i,x);
    else
        printf("[%d] : %d is Odd !\n",i,x);
}