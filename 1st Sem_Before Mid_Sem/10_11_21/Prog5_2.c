//Q5 Part 2
#include <stdio.h>

int main()
{
    int x ;
    
    printf("Enter the value of X : ");
    scanf("%d",&x);
    
    if(x==0)
        printf("0");
    else if(x>1)
        printf("1");
    else
        printf("-1");
        
    return 0;
}
