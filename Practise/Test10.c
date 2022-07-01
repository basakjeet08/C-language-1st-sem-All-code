#include <stdio.h>
void Calculate(int *,int *,int *,float *);
int main(){

    int num1,num2,sum;
    float average;
    int *address_of_num1 = &num1,*address_of_num2 = &num2, *address_of_sum = &sum ;
    float *address_of_average = &average;

    printf("Enter the First Number : ");
    scanf("%d",address_of_num1);
    printf("Enter the Second Number : ");
    scanf("%d",address_of_num2);

    Calculate(address_of_num1,address_of_num2,address_of_sum,address_of_average);
    printf("The Sum of the Numbers : %d \n",sum);
    printf("The Average of the Numbers : %f",average);
    return 0;
}
void Calculate(int *address_of_num1,int *address_of_num2,int *address_of_sum,float *address_of_average){
    *address_of_sum = *address_of_num1 + *address_of_num2;
    *address_of_average = (float)*address_of_sum/2;
}