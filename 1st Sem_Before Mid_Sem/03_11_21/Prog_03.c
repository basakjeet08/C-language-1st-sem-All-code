#include <stdio.h>
int main(){
	int a , b ,c;
	printf("Enter the First Side : ");
	scanf("%d",&a);
	printf("Enter the Second Side : ");
	scanf("%d",&b);
	printf("Enter the third Side : ");
	scanf("%d",&c);

	if((a+b)>c && (a+c)>b && (c+b)>a){
	
		printf("Its a Valid Triangle ");
	}
	else
		printf("Its not a Valid Triangle ");

	return 0 ;
	
}