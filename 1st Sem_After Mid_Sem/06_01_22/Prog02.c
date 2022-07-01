//Q2.
#include <stdio.h>
void f1(int);
void f2(int *);
int main(){
    int x = 10;
    int y = 20;

    printf("Before Calling !!-------------- \n");
    printf("X : %d \n",x);
    printf("Y : %d \n",y);

    f1(x);
    printf("After Calling f1(X) !!-------------- \n");
    printf("X : %d \n",x);
    printf("Y : %d \n",y);
    f2(&y);
    printf("After Calling f2(&y)) !!-------------- \n");
    printf("X : %d \n",x);
    printf("Y : %d \n",y);
}
void f1(int x){
    x = x+100;
}
void f2(int *y){
    *y = *y+100;
}