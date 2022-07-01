//Q1
#include <stdio.h>

int main()
{
    int m1[3][4],m2[4][2],m3[3][2],i,j,k;
    
    printf("Enter the Elements of First Matrix :----------\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("m1[%d][%d] : ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    
    printf("Enter the Elements of Second Matrix :---------\n");
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            printf("m1[%d][%d] : ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
    
    //Multiplication Part -------------------
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            m3[i][j]=0;
            for(k=0;k<3;k++){
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    
    printf("The Matrix after multiplication is :-----------\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }

    return 0;
}