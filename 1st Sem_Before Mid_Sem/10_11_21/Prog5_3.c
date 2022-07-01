//Q5 Part 3
#include <stdio.h>

int main()
{
    int x ;
    int a ;
    
    printf("Enter the value of X : ");
    scanf("%d",&x);
    
    (x>0)?printf("1"):(x<0)?printf("-1"):printf("0");
    return 0;
}