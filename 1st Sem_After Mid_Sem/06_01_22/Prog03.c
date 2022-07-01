//Q3.
#include <stdio.h>
void swap(int *,int *);

int main(){
    int x = 10;
    int y = 15;
    printf("Before Swapping !!\n");
    printf("X : %d\n",x);
    printf("Y : %d\n",y);
    swap(&x,&y);
    printf("After Swapping !!\n");
    printf("X : %d\n",x);
    printf("Y : %d\n",y);
    return 0 ;
}
void swap(int *x,int *y){
    int n;
    n = *y;
    *y = *x;
    *x = n ;
}