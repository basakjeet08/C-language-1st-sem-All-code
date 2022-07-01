//Q2. Salesman program
#include <stdio.h>
int main()
{
    int table[4][3]={{310,275,365},{210,190,325},{405,235,240},{260,300,380}};
    int i,j,eachsales,sumsales,grand;
    grand = 0;
    printf("The Answer to Question 1 :-----------\n");
    for(i=0;i<4;i++){
        eachsales = 0;
        for(j=0;j<3;j++){
            eachsales+=table[i][j];
        }
        printf("The Sales By Salesman %d : %d\n",i+1,eachsales);
    }  
    printf("The Answer to Question 2 :-----------\n");
    for(i=0;i<3;i++){
        sumsales = 0;
        for(j=0;j<4;j++){
            sumsales+=table[j][i];
        }
        printf("The Value of item %d : %d\n",i+1,sumsales);
    }  
    printf("The Answer to Question 3 :-----------\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            grand = grand+table[i][j];
        }
    }
    printf("The Grand Total of all Sales : %d",grand);
    return 0;
}