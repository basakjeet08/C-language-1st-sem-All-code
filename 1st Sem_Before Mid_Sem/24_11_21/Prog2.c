//2. WAP to find GCD and LCM of 2 integers.
#include <stdio.h>
int main()
{
    int num1, num2, small;
    float gcd, lcm;
    printf("Enter 2 integers:---------------\n");
    scanf("%d%d", &num1, &num2);  
    if (num1>num2)
        small = num2;
    else
        small = num1;
        
    for (int i=1; i<=small; i++)
        if ((num1%i==0) && (num2%i==0))
            gcd = i;        
    lcm = num1*num2/gcd; 
    printf("GCD: %.0f\n", gcd);
    printf("LCM: %.0f", lcm); 
    return 0;
}