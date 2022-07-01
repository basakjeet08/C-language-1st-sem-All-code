//Q4. Reverse a number and check for palindrome
#include <stdio.h>
int main()
{
    int input,rem,rev,number;
    rev = 0;    
    printf("Enter the Number to Check : ");
    scanf("%d",&input);   
    number = input;   
    while(input!=0){
        rem = input % 10;
        rev = rev*10 + rem;
        input = input/10;
    }
    printf("The Reverse is : %d\n",rev);    
    if(number == rev)
        printf("It is a Palindrome");
    else
        printf("It is Not a Palindrome");
    return 0;
}