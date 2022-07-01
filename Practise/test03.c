#include <stdio.h>

void mul(void);
int x,y;
int main(){
    
    printf("Enter the Numbers :-------------\n");
    scanf("%d%d",&x,&y);

    mul();
}

void mul(void){
    int a = x*y;
    printf("Multiplication = %d",a);
}