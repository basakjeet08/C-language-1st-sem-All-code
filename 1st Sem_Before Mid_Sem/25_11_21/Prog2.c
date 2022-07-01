//Q2
#include <stdio.h>

int main()
{
    int no[5],i;
    int sum = 0;
    printf("Enter the Numbers : \n");
    for(i=0;i<5;i++){
        scanf("%d",&no[i]);
        sum = sum + no[i];
    }
    printf("The Sum is : %d",sum);
    return 0;
}