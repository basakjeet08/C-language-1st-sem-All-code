//Q1. WAP to display the content of 2-D array of size 3×3.
#include <stdio.h>
int main()
{
    int i,j;
    int input[3][3];  
    printf("Enter the Values :-----------\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&input[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",input[i][j]);
        }
        printf("\n");
    }
    return 0;
}