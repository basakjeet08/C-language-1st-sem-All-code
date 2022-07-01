// Assignment 09
//Q4. WAP to count the no of digits in an integer
#include <stdio.h>
int main()
{
    int i,n,input;
    i = 0;
    
    printf("Enter the Integer : ");
    scanf("%d",&input);
    
    while(input>0){
        input = input/10;
        i++;
        
    }
    
    printf("The Number of Digits : %d",i);
    return 0;
}