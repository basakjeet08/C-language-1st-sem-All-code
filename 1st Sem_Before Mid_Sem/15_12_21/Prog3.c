#include <stdio.h>
#include <math.h>
void Triangle(int, int, int);
float Cal_Area(int,int,int);
int main()
{
    int a,b,c;
    printf("Enter the Sides of the triangle : ------------------\n");
    printf("A : ");
    scanf("%d",&a);
    printf("B : ");
    scanf("%d",&b);
    printf("C : ");
    scanf("%d",&c);   
    Triangle(a,b,c);
    return 0;
}
void Triangle(int a,int b, int c){    
    float area ;
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        area = Cal_Area(a,b,c);
        printf("The Area : %.2f",area);
    }
    else
        printf("The Entered Sides are Not Valid to make a Triangle !!");       
}
float Cal_Area(int a, int b, int c){
    float s = (a+b+c)/2.0;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));  
    return area;
}