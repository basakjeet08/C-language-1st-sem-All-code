// Assignment 09
//Q1. WAP to print all numbers within a given 	range. The range is given by user

#include <stdio.h>
int main(){

	int i,n;
	i = 0 ;
	printf("Enter the Range : ");
	scanf("%d",&n);
	while(i<=n){

	    printf("%d\n",i);
	    i++;
	}
	return 0;
}