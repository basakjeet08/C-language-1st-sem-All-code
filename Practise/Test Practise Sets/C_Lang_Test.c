#include<stdio.h>
int main(){
    int sum = 0 ;
    int arr_1880[3][3],transpose_1880[3][3],i,j,k;
    int mul_1880[3][3];
    
    printf("Enter the Value of the Matrix -----------\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            printf("Element [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr_1880[i][j]);
        }
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            transpose_1880[j][i] = arr_1880[i][j];
        }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum = 0;
            for(k=0;k<3;k++){
                sum = sum + arr_1880[i][k]*transpose_1880[k][i];
            }
            mul_1880[i][j] = sum ;
        }
    }
    printf("The Multiplication of Matrices :-----------\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mul_1880[i][j]);
        }
        printf("\n");
    }
    return 0;
}