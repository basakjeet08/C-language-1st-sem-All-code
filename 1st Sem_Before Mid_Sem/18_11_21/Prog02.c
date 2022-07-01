//Assignment 10
//Q2. Binary to decimal
#include <stdio.h>
#include <math.h>
int main(){

    int a,b,c,i;
    a=0;
    i=0;
    printf("Enter the binary number:");
    scanf("%d",&b);
    do{

        c = b % 10;
        a = a + c * pow(2,i);
        b=b/10;
        i++;
    }
    while(b!=0);
    printf("%d",a);
    return 0;
}