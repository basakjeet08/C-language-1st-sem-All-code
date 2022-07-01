//Q2
#include <stdio.h>

int main()
{
    int m1[20][20],m2[20][20],m3[20][20],i,j,k,r1,c1,r2,c2;
    
    
    printf("Rows and Colomn of 1st Matrix ---------\n");
    printf("Enter the Row of 1st Matrix : ");
    scanf("%d",&r1);
    printf("Enter the Colomn of 1st Matrix : ");
    scanf("%d",&c1);
    
    printf("Rows and Colomn of 2nd Matrix ---------\n");
    printf("Enter the Row of 2nd Matrix : ");
    scanf("%d",&r2);
    printf("Enter the Colomn of 2nd Matrix : ");
    scanf("%d",&c2);
    
    printf("Enter the Elements of First Matrix :----------\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("m1[%d][%d] : ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    
    printf("Enter the Elements of Second Matrix :---------\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("m1[%d][%d] : ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
    
    //Multiplication Part -------------------
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            m3[i][j]=0;
            for(k=0;k<r1;k++){
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