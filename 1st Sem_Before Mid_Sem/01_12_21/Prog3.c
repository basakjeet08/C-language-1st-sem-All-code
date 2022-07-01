//Q3. Matrix addition
#include <stdio.h>
int main()
{
    int a[2][2] = {{1,3},{2,5}};
    int b[2][2] = {{3,9},{5,11}};
    int i,j,sum;
    sum = 0;
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum = 0;
            sum = sum + a[i][j]+b[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
    }
    return 0;
}