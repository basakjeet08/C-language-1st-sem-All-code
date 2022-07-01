//Q13
#include <stdio.h>

int main()
{
    int i,j,count;
    
    count = 0;
    for(i=5;i>=1;i--){
        for(j=i;j<=5;j++){
            if(j%2!=0)
                printf("0\t");
            else
                printf("1\t");
            
            count++;
        }
        printf("\n");
    }

    return 0;
}