//Q1
#include <stdio.h>
int main()
{
    int i, j, rows_1880, cols_1880, array_1880[100][100];
    printf("\nEnter number of rows of array: ");
    scanf("%d", &rows_1880);
    printf("Enter number of columns of array: ");
    scanf("%d", &cols_1880);
    printf("Enter array: \n");
    for (i=0; i<rows_1880; ++i)
    {
        printf("For Row %d: (%d elements)\n", i+1, cols_1880);
        for (j=0; j<cols_1880; j++)
            scanf("%d", *(array_1880+i)+j);
    }
    printf("\nArray: \n");
    for (i=0; i<rows_1880; i++)
    {
        for (j=0; j<cols_1880; ++j)
            printf("%d\t", *(*(array_1880+i)+j));
        printf("\n");
    }   
    return 0;
}