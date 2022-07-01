//WAP to calculate the area preimeter of a rectangle using 2 function
#include <stdio.h>

void AreaCal();
void PeriCal();
int l,b;
int main(){
    printf("Enter the Length : ");
    scanf("%d",&l);
    printf("Enter the Breadth : ");
    scanf("%d",&b);
    AreaCal();
    PeriCal();

    return 0;
}

void AreaCal(){
    int area;
    area = l*b;
    printf("Area : %d\n",area);
}

void PeriCal(){
    int perimeter ;
    perimeter = 2*(l+b);
    printf("Perimeter : %d",perimeter);
}