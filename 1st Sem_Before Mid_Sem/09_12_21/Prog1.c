//Q1. WAP to calculate the Interest
#include <stdio.h>
void Calculation();
int p,t;
float r;
int main()
{
    printf("Enter the Principal Amount : ");
    scanf("%d",&p);
    printf("Enter the Time : ");
    scanf("%d",&t);
    printf("Enter the Rate of Interest : ");
    scanf("%f",&r);
    Calculation();
    return 0;
}
void Calculation(){
    float interest ;   
    interest = (p*r*t)/100.0;    
    printf("The Simple Interest is %f",interest);
}