//Q3. Perfect Number
#include <stdio.h>
int main(){
	int input ,i,count,sum;
	sum = 0;
	printf("Enter the Number : ");
	scanf("%d",&input);
	for(i=1;i<=input/2;i++){
		if(input%i==0){
			sum = sum + i;
		}
	}
	
	if(sum==input)
	    printf("Its a Perfect Number !");
	else
	    printf("Its not a Perfect Number !");
	
	return 0;
}