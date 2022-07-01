//Q4. Multiplication Table
#include <stdio.h>
int main(){
	
	int input ,i,j,mul;
	for(i=1;i<=10;i++){
	    for(j=1;j<=10;j++){
	        mul = i*j;
	        printf("%d\t",mul);
	    }
	    printf("\n");
	}
	return 0;
}