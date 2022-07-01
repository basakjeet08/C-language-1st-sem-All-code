#include <stdio.h>
int main(){

	float pi = 3.14;
	float area ;
	float perimeter ; 
	float r = 5.0 ;

	area = pi*r*r;
	perimeter = 2.0*pi*r ;

	printf("The area of the circle with radius %f is %f and perimeter is %f ",r,area,perimeter);
	return 0;
}
