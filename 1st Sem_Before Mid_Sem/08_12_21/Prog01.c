//Q1. void mul(int,int)
#include <stdio.h>
void mul(int,int);
int main(){
    int a,b;

    printf("Enter the Numbers :---------------\n");
    scanf("%d%d",&a,&b);

    mul(a,b);

    return 0;
}

void mul(int a, int b){
    int x = a*b;
    printf("Multiplication = %d",x);
}