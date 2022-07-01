#include <stdio.h>

int main()
{
    float a,b;
    
    printf("Enter the first Integer : ");
    scanf("%f",&a);
    printf("Enter the Second Integer : ");
    scanf("%f",&b);
    
    float add = a+ b ;
    float diff = a - b ;
    float mul = a*b ;
    float divi = a / b;
    
    printf("Sum : %f\t Difference : %f\t Divide : %f \t Multiplication : : %f \t",add,diff,divi,mul);


    return 0;
}
