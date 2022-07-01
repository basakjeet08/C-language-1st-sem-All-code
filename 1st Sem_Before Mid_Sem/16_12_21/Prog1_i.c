//Q1.(i). WAP to implement a function  void check_even_odd(int x) to find the integer is even or odd.
#include <stdio.h>
void check_even_odd(int );
int main(){
    int num_1880;
    printf("Enter the Number : ");
    scanf("%d",&num_1880);

    check_even_odd(num_1880);
    return 0;
}
void check_even_odd(int num){
    if(num%2==0)
        printf("The Number is Even !!");
    else
        printf("The Number is Odd !!");
}