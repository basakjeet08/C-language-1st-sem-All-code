// Assignment 10
//Q1. Decimal to binary
#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,rem,i;
   b=0;
   i=0;
   printf("Enter a decimal number:");
   scanf("%d",&a);
   do{
       rem=a%2;
       b=b+rem*pow(10,i);
       a=a/2;
       i++;
   }while(a!=0);
   printf("%d",b);

    return 0;
}

