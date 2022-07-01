//Q2. int mul(int,int)
#include <stdio.h>
int mul(int,int);
int main(){
    int a,b,x;

    printf("Enter the Numbers :---------------\n");
    scanf("%d%d",&a,&b);

    x = mul(a,b);
    printf("Multiplication = %d",x);

    return 0;
}

int mul(int a, int b){
    int x = a*b;
    return x;
}