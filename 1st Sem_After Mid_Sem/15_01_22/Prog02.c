//Q2
#include <stdio.h>
int main()
{
    int square(int);
    int cube(int);
    int (*p_1880)(int);
    int square_1880, cube_1880;
    int sq_side_1880, cu_side_1880;

    printf("\nEnter side of square: ");
    scanf("%d", &sq_side_1880);
    printf("Enter side of cube: ");
    scanf("%d", &cu_side_1880);

    p_1880 = square;
    printf("\nArea of square: %d\n", (*p_1880)(sq_side_1880));
    p_1880 = cube;
    printf("Area of cube: %d", (*p_1880)(cu_side_1880));

    return 0;
}

int square(int n) {return n*n;}
int cube(int n) {return n*n*n;}