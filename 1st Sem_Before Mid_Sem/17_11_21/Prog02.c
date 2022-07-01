//Assignment 09
//Q2. WAP to evaluate the equation y=x^n
#include <stdio.h>
int main(){

	int i,n,x;
	i = 1 ;
	int cal = 1;

	printf("Enter the Number : ");
	scanf("%d",&x);
	printf("Enter the Power : ");
	scanf("%d",&n);

	while(i<=n){

		cal = cal * x;
		i++;
	}
	printf("The Value is : %d",cal);
	return 0;
}