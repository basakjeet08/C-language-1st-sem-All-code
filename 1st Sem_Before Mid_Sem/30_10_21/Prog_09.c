#include <stdio.h>

int main()
{
    int a,b;
    
    printf("Enter the first Integer : ");
    scanf("%d",&a);
    printf("Enter the Second Integer : ");
    scanf("%d",&b);
    
    int add = a+ b ;
    int diff = a - b ;
    int mul = a*b ;
    int divi = a / b;
    int mod = a% b ;
    
    printf("Sum : %d\t Difference : %d\t Multiplication : %d \t Divide : %d \t Modulus : %d \t",add,diff,mul,divi,mod);

    return 0;
}