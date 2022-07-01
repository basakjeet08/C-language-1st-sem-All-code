#include <stdio.h>

int main()
{
    int input , kms , m ;
    
    printf("Enter the Quantity : ");
    scanf("%d",&input);
    
    kms = input/1000 ;
    m = input%1000;
    
    printf("%d meter = %d km and %d meter",input,kms,m);
    return 0;
}