//Q15
#include <stdio.h>

int main()
{
    int i,j,space,count,count1;
    
    for(i=1;i<=5;i++){
        for(space=1;space<=5-i;space++){
            printf(" ");
        }
        count = i;
        count1 = 2;
        for(j=1;j<=2*i-1;j++){
            if(j<=i){
                printf("%d",count);
                count--;
            }
            else{
                printf("%d",count1);
                count1++;
            }
        }
        printf("\n");
    }

    return 0;
}