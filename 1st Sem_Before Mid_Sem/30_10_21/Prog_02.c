#include <stdio.h>

int main()
{
    float input ; 
    float celsius ;
    
    printf("Enter the Temperature in Fahrenheit : ");
    scanf("%f",&input);
    
    celsius = (input - 32.0)/1.8 ;
    
    printf("Celsius : %f",celsius);

    return 0;
}