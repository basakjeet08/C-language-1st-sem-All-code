#include <stdio.h>
void FirstHalf(int[],int);
void SecondHalf(int[],int,int);
int main(){
    int arr_1880[50],size_1880,i;
    printf("Enter the Size of the Array : ");
    scanf("%d",&size_1880);
    printf("Enter the Elements of Array :------------------ \n");
    for(i=0;i<size_1880;i++){
        printf("%d : ",i);
        scanf("%d",&arr_1880[i]);
    }
    FirstHalf(arr_1880,(size_1880/2)-1);
    SecondHalf(arr_1880,((size_1880/2)),size_1880);
    return 0;
}
void FirstHalf(int x[],int upplim){
    int i,j,dummy;
    for(i=0;i<=upplim;i++)
        for(j=0;j<=upplim-i-1;j++){
            
            if(x[j]<x[j+1]){
                dummy = x[j];
                x[j] = x[j+1];
                x[j+1]= dummy;
            }
        }
    printf("The Sorted Array is :------------------ \n");
    for(i=0;i<=upplim;i++){
        printf("%d : %d \n",i,x[i]);
    }
}
void SecondHalf(int x[],int botlim,int size){
    int i,j,dummy;
    for(i=botlim;i<size;i++)
        for(j=botlim;j<size-1;j++){
            
            if(x[j]>x[j+1]){
                dummy = x[j];
                x[j] = x[j+1];
                x[j+1]= dummy;
            }
        }
    for(i=botlim;i<size;i++){
        printf("%d : %d \n",i,x[i]);
    }
}