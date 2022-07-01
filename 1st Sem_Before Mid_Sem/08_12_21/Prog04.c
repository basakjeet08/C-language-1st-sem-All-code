//Q4. int mul(void)
#include <stdio.h>

int mul(void);
int a,b;
int main(){   
    int x;
    printf("Enter the Numbers :-------------\n");
    scanf("%d%d",&a,&b);
    x = mul();
    printf("Multiplication = %d",x);

    return 0 ;
}
int mul(void){
    int x = a*b;
    return x;
}