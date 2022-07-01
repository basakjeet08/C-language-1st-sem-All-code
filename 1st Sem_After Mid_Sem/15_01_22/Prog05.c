//Q5
#include<stdio.h>
struct complex
{
    int real;
    int imaginary;
};

int main()
{
    struct complex comp_num1_1880, comp_num2_1880, sum_1880;
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%d%d", &comp_num1_1880.real, &comp_num1_1880.imaginary);
    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%d%d", &comp_num2_1880.real, &comp_num2_1880.imaginary);

    sum_1880.real = comp_num1_1880.real + comp_num2_1880.real;
    sum_1880.imaginary = comp_num1_1880.imaginary + comp_num2_1880.imaginary;

    printf("SUM = %d+i%d", sum_1880.real, sum_1880.imaginary);

    return 0;
}