//Q10(ii). Bubble sort (descending)
#include <stdio.h>
int main()
{
    int arr[100], i, j, size, temp;
    printf("Enter size of array: ");
    scanf("%d", &size);   
    printf("Enter array: ");
    for (i=0; i<size; i++)
        scanf("%d", &arr[i]);       
    for (i=(size-1); i>0; i--)
    {
        for (j=0; j<i; j++)
        {
            if (arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nArray: ");    
    for (i=0; i<size; i++)
        printf("%d  ", arr[i]);
        
    return 0;
}