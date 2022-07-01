#include <stdio.h>
#include <math.h>
float Find_Area(float,float,float);
float Find_Perimeter(float,float,float);
int main()
{
    float a,b,c,area;  
    printf("Enter the Sides of a Traingle :--------------\n");
    printf("A : ");
    scanf("%f",&a);
    printf("B : ");
    scanf("%f",&b);
    printf("C : ");
    scanf("%f",&c);   
    area = Find_Area(a,b,c);  
    printf("The Area is : %.2f",area);
    return 0;
}
float Find_Area(float a,float b,float c){
    float s = Find_Perimeter(a,b,c);
    s = s/2;  
    float area = sqrt((s*(s-a)*(s-b)*(s-c))); 
    return area;
}
float Find_Perimeter(float a,float b,float c){
    float perimeter = a + b + c;  
    return perimeter;
}
