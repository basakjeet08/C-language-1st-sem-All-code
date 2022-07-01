//Q5 Part 1
#include <stdio.h>

int main()
{
    int x ;
    
    printf("Enter the value of X : ");
    scanf("%d",&x);
    
    if(x!=0){
        if(x>0){
            printf("1");
        }
        else
            printf("-1");
    }
    else
        printf("0");

    return 0;
}