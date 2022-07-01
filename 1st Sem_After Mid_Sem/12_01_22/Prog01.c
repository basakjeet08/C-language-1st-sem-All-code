//Q1
#include <stdio.h> 
int main()
{
    int arr_1880[100];
    int size_1880, i;

    printf("Enter size of array: ");
    scanf("%d", &size_1880);

    printf("Enter %d elements into array:\n", size_1880);
    for (i=0; i<size_1880; i++)
        scanf("%d", arr_1880+i);

    printf("\nArray:\t");
    for (i=0; i<size_1880; i++)
        printf("%d\t", *(arr_1880+i));

    return 0;
}