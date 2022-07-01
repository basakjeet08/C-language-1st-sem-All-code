//Q6. Display the 1-D array in reverse order.
#include <stdio.h>
int main()
{
    int ar[8],i;
    printf("Enter the Array Elements : -------------\n");
    for(i=0;i<8;i++){
        scanf("%d",&ar[i]);
    }
    
    printf("The Array Elements are------------------\n");
    for(i=7;i>=0;i--){
        printf("%d\t",ar[i]);
    }
    return 0;
}