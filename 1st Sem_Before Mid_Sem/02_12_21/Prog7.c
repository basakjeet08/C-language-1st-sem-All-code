//Q7
#include <stdio.h>

int main()
{
    int m1[20][20],i,j,r,c,k;
    k=0;
    
    printf("Rows and Colomn of 1st Matrix ---------\n");
    printf("Enter the Row of 1st Matrix : ");
    scanf("%d",&r);
    printf("Enter the Colomn of 1st Matrix : ");
    scanf("%d",&c);
    
    printf("Enter the Elements of First Matrix :----------\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("m1[%d][%d] : ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    
    printf("The minor diagonal elements are -----------\n");
    for(i=1;i<r;i++){
        for(j=c-1;j>0;j--){
            if(j==(c-i-1)){
                break;    
            }
            printf("%d\t",m1[i][j]);
        }
    }
    return 0;
}