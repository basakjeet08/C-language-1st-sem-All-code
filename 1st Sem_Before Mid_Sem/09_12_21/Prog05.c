//Q5. WAP to calculate the area preimeter of a Cicle
#include <stdio.h>
void find_area();
void find_perimeter();
float r;
int main(){
    printf("Enter the Radius : ");
    scanf("%f",&r);
    find_area();
    find_perimeter();
    return 0;
}
void find_area(){
    float area;
    area = 3.14*r*r;
    printf("Area : %f\n",area);
}
void find_perimeter(){
    float perimeter ;
    perimeter = 2.0*3.14*r;
    printf("Perimeter : %f",perimeter);
}