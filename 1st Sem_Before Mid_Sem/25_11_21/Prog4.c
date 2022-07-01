//Q4. WAP to display the array elements in reverse order. 
#include <stdio.h>

int main()
{
    int no[50],i;
    
    printf("Enter 10 Integers : \n");
    for(i=0;i<10;i++)
        scanf("%d",&no[i]);

    printf("The Elements in Array are \n");
    for(i=9;i>=0;i--)
        printf("%d\n",no[i]);
    
    return 0;
}