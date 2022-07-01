//Q1.(ii). WAP to implement a function int check_even_odd(int x) to find the integer is even or odd.
#include <stdio.h>
int check_even_odd(int );
int main(){
    int num_1880,flag_1880;
    printf("Enter the Number : ");
    scanf("%d",&num_1880);
    flag_1880 = check_even_odd(num_1880);
    if(flag_1880 == 0)
        printf("The Number is Even !!");
    else
        printf("The Number is Odd !!");
    return 0;
}
int check_even_odd(int num){
    if(num%2==0)
        return 0;
    return 1;
}