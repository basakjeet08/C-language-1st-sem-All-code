//Q09
#include <stdio.h>

int main()
{
    int i,j,space,count;
    
    for(i=1;i<=5;i++){
        for(space=1;space<=5-i;space++){
            printf("\t");
        }
        for(j=1;j<=i*2-1;j++){
            if(j%2!=0)
                printf("*\t");
            else
                printf(" \t");
            
        }
        printf("\n");
    }

    return 0;
}