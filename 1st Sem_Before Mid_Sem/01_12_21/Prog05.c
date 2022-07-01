//Q5. Display the transpose of a matrix

#include <stdio.h>
int main()
{
    int mat[10][10];
    int tran[10][10];
    int rc; 
    printf("Number of rows and columns (Single input): ");
    scanf("%d", &rc);
    
    printf("\nInput matrix:\n");
    for (int i=0; i<rc; i++)
    {
        printf("For row %d : \n", i+1);
        for (int j=0; j<rc; j++)
            scanf("%d", &mat[i][j]);
    }    
    for (int i=0; i<rc; i++)
    {
        for (int j=0; j<rc; j++)
            tran[j][i] = mat[i][j];
    }  
    printf("\nMatrix: \n");
    for (int rows=0; rows<rc; ++rows)
    {
        for (int cols=0; cols<rc; cols++)
        {
            printf("%d  ", mat[rows][cols]);
        }
        printf("\n");
    }
    printf("\nTranspose: \n");
    for (int rows=0; rows<rc; ++rows)
    {
        for (int cols=0; cols<rc; cols++)
        {
            printf("%d  ", tran[rows][cols]);
        }
        printf("\n");
    }
    return 0;
}