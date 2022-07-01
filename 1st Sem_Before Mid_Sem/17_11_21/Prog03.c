// Assignment 09
//Q3. WAP to find the sum of the series 1+ ½ +1/3 +1/4+………+1/n.
#include <stdio.h>
int main(){

	int i,n;
	float sum , cal ;
	sum = 0.0;
	i = 1;
	cal = 1.0;

	printf("Enter the Number : ");
	scanf("%d",&n);

	while(i<=n){
		cal = (float)1.0/i;
		sum = sum + cal;
		i++;
	}
	printf("The sum is : %f",sum);
	return 0;
}