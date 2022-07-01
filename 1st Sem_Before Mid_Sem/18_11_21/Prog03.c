//Assignment 10
//Q3. No of 1’s and 0’s in a binary no
#include <stdio.h>
int main()
{
    int i , x, input,c;
    i = 0;
    c = 0;   
    printf("Enter the Number : ");
    scanf("%d",&input);   
    while(input>0){
        x = input%10;
        if(x==0)
            i++;
        else
            c++;       
        input = input/10;
    }    
    printf("The Number of 1's is %d and 0's is %d",c,i);
    return 0;
}