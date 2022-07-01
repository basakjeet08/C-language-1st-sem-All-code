//Q10
#include <stdio.h>

int main()
{
    int i,j,space;
    
    for(i=1;i<=5;i++){
        for(space=1;space<=5-i;space++){
            printf("\t");
        }
        for(j=1;j<=i*2-1;j++){
            printf("*\t");
        }
        printf("\n");
    }

    return 0;
}