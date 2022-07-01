//Q3.
#include <stdio.h>
int size_1880;
int main(){
    int arr[100], i, key_1880;
    int* result_1880;
    int* search(int*, int);
    printf("Enter size of array:");
    scanf("%d", &size_1880);
    printf("Enter %d elements of the array:\n", size_1880);
    for(i=0; i<size_1880; i++)
        scanf("%d",&arr[i]);
    printf("Enter number to be checked: ");
    scanf("%d",&key_1880);
    result_1880 = search(arr, key_1880);
    if (result_1880 == 0)
        printf("NOT FOUND");
    else
        printf("FOUND AT ADDRESS: %p", result_1880);
    return 0;
}
int* search(int* x,int n){
    int i;
    for(i=0; i<size_1880; i++)
    {
        if(x[i]==n)
            return &x[i];
    }
    return 0;
}