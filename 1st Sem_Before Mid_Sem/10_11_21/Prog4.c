//Q4
#include <stdio.h>

int main()
{
    int consumed ;
    float amount ;
    printf("Enter the Number of Units Consumed : ");
    scanf("%d", &consumed);
    if(consumed <=200){
        amount = 0.50*consumed ;
    }
    else if (consumed <=400){
        amount = 100 + 0.65*(consumed - 200);
    }
    else if (consumed <=600){
        amount = 230 + 0.80*(consumed - 400);
    }
    else
        amount = 390 + 1.00*(consumed - 600);
    printf("The Amount to be Paid is : %f",amount);
    return 0;
}