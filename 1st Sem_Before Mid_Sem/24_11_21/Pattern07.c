//Normal Pyramid Problem 07
#include <stdio.h>
int main(){
	
	int i,j;

	for(i=68;i>=65;i--){
	    for(j=65;j<=i;j++){
	        printf("%c\t",j);
	    }
	    printf("\n");
	}
	return 0;
}