#include <stdio.h>
int Factorial(int);
int main(){
    int y_1880,fact_1880;

    printf("Enter the Number : ");
    scanf("%d",&y_1880);
    fact_1880 = Factorial(y_1880);

    printf("The Factorial is : %d",fact_1880);
    return 0;
}
int Factorial(int y){
    int fact;

    if(y==1)
        return 1;
    else
        fact = y*Factorial(y-1);

    return fact ;
}