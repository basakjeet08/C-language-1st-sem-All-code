#include <stdio.h> 
 
int main() 
{ 
    float number;
    printf("Enter the Number : ");
    scanf("%f",&number); 
    int integral = number; 
    float fractional = number - integral; 
    printf("%d %f\n",integral,fractional); 
    return 0; 
} 