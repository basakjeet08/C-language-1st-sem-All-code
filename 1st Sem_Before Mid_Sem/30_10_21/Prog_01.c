#include <stdio.h>

int main()
{
    int input ;
    int square , cube ;
    printf("Enter a Integer :  ");
    scanf("%d",&input);
    
    square = input*input ;
    cube = input*input*input ;
    
    printf("\n Square : %d",square);
    printf("\n Cube : %d",cube);
    
    return 0;
}
