//Normal Pyramid Problem 08
#include <stdio.h>
int main(){
	
	int i,j;

	for(i=65;i<=68;i++){
	    for(j=65;j<=i;j++){
	        printf("%c\t",i);
	    }
	    printf("\n");
	}
	return 0;
}