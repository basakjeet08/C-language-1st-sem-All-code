//Q2.
#include <stdio.h>
int size_1880;
int main()
{
    int arr_1880[100];
    void readArray(int*);
    void displayArray(int*);

    printf("Enter size of array:");
    scanf("%d", &size_1880);

    readArray(arr_1880);
    displayArray(arr_1880);
    return 0;
}
void readArray(int *x)
{
    int i;
    printf("Enter %d numbers into array:\n", size_1880);
    for (i=0; i<size_1880; i++)
        scanf("%d", x+i);
}
void displayArray(int *y)
{
    int i;
    printf("\nArray:\t");
    for (i=0; i<size_1880; i++)
        printf("%d\t", *(y+i));
}