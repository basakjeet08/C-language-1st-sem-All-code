//Q1. WAP to create an array that can store max. 50 integers and display the contents of the array 
#include <stdio.h>
int main()
{
    int no[50],i;
    
    printf("Enter 50 Integers : \n");
    for(i=0;i<50;i++)
        scanf("%d",&no[i]);
        
    printf("The Elements in Array are \n");
    for(i=0;i<50;i++){
        printf("%d\n",no[i]);
    }
      
    return 0;
}