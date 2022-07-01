//Q1
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr_1880;
    int n_1880, i;
    printf("Enter number of elements of array:");
    scanf("%d", &n_1880);
    ptr_1880 = (int*) malloc(n_1880 * sizeof(int));
    if (ptr_1880 == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        printf("Memory successfully allocated.\n");
        printf("Enter %d elements of array:\n", n_1880);

        for (i=0; i<n_1880; ++i) 
            scanf("%d", &ptr_1880[i]);

        printf("\nThe elements of the array are:\n");
        for (i=0; i<n_1880; ++i) 
            printf("%d\t", ptr_1880[i]);
    }

    return 0;
}