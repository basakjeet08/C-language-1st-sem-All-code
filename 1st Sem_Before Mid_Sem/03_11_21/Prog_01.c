#include <stdio.h>
int main(){
	int a , b ;
	printf("Enter the First Number : ");
	scanf("%d",&a);
	printf("Enter the Second Number : ");
	scanf("%d",&b);

	if(a>b){
	
		printf("%d is the maximum of the two",a);
	}
	else
		printf("%d is the maximum of the two",b);

	return 0 ;
	
}