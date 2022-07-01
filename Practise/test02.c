#include <stdio.h>
int main(){
    int i,n,count;
    int sum = 1;
    count = 0;
    printf("Enter the 1st Number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        
        sum = count + sum + i;
        count = sum-count;
    }
    printf("The Sum is : %d",sum);

    return 0 ;
}