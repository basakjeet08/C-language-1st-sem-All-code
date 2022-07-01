//Q3. void mul(void)
#include <stdio.h>

void mul(void);
int a,b;
int main(){
    
    printf("Enter the Numbers :-------------\n");
    scanf("%d%d",&a,&b);

    mul();

    return 0 ;
}

void mul(void){
    int x = a*b;
    printf("Multiplication = %d",x);
}