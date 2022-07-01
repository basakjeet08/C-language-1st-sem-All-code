// Assignment 09
// Q5. WAP to find the sum of digits of an integer
#include <stdio.h>
int main()
{
    int i,n,input,cal,sum;
    i = 0;
    sum = 0;   
    printf("Enter the Integer : ");
    scanf("%d",&input);
       
    while(input>0){
        cal = input%10;
        input = input/10;
        sum = sum + cal ;
        i++;
        
    } 
    printf("The Sum of Digits : %d",sum);
    return 0;
}