//Q1. Prime Number 
#include <stdio.h>
int main(){
	
	int input ,i,count,j;
	count = 0;
    for(i=2;i<=100;i++){
        count = 0;
        for(j=2;j<=i/2;j++){
		    if(i%j==0){
			    count++;
		        
		    }
    	}
	    if(count == 0)
	        printf("%d is a Prime Number !!\n",i);
    }
	return 0;
}