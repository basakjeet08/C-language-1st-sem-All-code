//Q2
#include <stdio.h>
int main(){

    float purchase_amnt, paid_amnt;

    printf("Enter the purchase amount : ");
    scanf("%f", &purchase_amnt);

    if (purchase_amnt<=100)
        paid_amnt=purchase_amnt-( purchase_amnt*0.05);
    else if (purchase_amnt<=200)
        paid_amnt=purchase_amnt-( purchase_amnt*0.075);
    else if (purchase_amnt<=300)
        paid_amnt=purchase_amnt-( purchase_amnt*0.1);
    else
        paid_amnt=purchase_amnt-( purchase_amnt*0.15);
    printf("Net amount to be paid is%f", paid_amnt);

return 0;
}