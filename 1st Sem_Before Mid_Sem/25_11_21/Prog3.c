//Q3. WAP to find largest element stored in an array. 
#include <stdio.h>

int main()
{
    int no[5],i;
    int max = 0;
    printf("Enter the Numbers : \n");
    for(i=0;i<5;i++){
        scanf("%d",&no[i]);
    }
    max = no[0];
    for(i=0;i<5;i++){
        if(max<no[i])
            max = no[i];
    }
    printf("The Greatest is : %d",max);
    return 0;
}