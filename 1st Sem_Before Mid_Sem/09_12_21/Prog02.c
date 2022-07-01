//Q2. Implement a function power that calculates x raised to power y.
#include <stdio.h>
int power(int,int);
int main(){
    int x,y,pow;
    printf("Enter the Number : ");
    scanf("%d",&x);
    printf("Enter the Power : ");
    scanf("%d",&y);
    pow = power(x,y);
    printf("The Result is : %d",pow);
    return 0;
}
int power(int x, int y){
    int i,pow;
    pow = 1;
    for(i=1;i<=y;i++){
        pow = pow*x;
    }
    return pow;
}