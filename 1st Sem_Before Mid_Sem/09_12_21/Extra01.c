//WAP to calculate the area preimeter of a rectangle using 1 function
#include <stdio.h>
void Calculation();
int l,b;
int main(){
    printf("Enter the Length : ");
    scanf("%d",&l);
    printf("Enter the Breadth : ");
    scanf("%d",&b);
    Calculation();

    return 0;
}

void Calculation(){
    int area,perimeter;

    area = l*b;
    perimeter = 2*(l+b);

    printf("Area : %d\n",area);
    printf("Perimeter : %d",perimeter);
}