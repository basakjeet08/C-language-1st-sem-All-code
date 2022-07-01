//Q5. 1+x+x^2+x^3+………………+x^n
#include <stdio.h>
#include <math.h>
int main()
{
    int cal,i,p,x;
    i = 0;
    cal = 0;
    
    printf("Enter the Number : ");
    scanf("%d",&x);
    printf("Enter the Power : ");
    scanf("%d",&p);
    while(i<=p){
        cal = cal + pow(x,i);
        i++;
    }
    printf("The Sum is : %d",cal);
    return 0;
}