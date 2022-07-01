//Q9. Insert an element to an array.
#include <stdio.h>
int main()
{
    int ar[10],i,n,pos;
    printf("Enter the Array Elements : -------------\n");
    for(i=0;i<9;i++){
        scanf("%d",&ar[i]);
    }   
    printf("Enter the Element to be Inserted : ");
    scanf("%d",&n);
    ar[i]=n;
    
    printf("The Final Array is :--------------------\n");
    for(i=0;i<10;i++){
        printf("%d \n",ar[i]);
    }
    return 0;
}