// Q7
#include <stdio.h>
#include <math.h>
int main()
{
    int i,number,x;
    int fact = 1;
    float sum = 1.0; 
    printf("Enter the Number(x) : ");
    scanf("%d",&x);
    printf("Enter the Factorial Range : ");
    scanf("%d",&number);
    for(i=1;i<=number;i++){     
        fact = fact * i ;
        sum = sum + pow(x,i)/fact;
    }
    printf("The sum is : %f",sum);
    return 0;
}