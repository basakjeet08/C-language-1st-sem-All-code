#include <stdio.h>
#include <math.h>// Q8.
int main()
{
    int i,sign;
    int fact = 1;
    float sum ,x,cal;
    sign = -1;   
    printf("Enter The value of x : ");
    scanf("%f",&x);
    x = x * 3.14/180;
    sum = x ;   
    for(i=3;;i+=2){
        fact = fact * i * (i-1);
        cal = pow(x,i)/fact;       
        if(cal<0.001)
            break;            
        else{
            sum = sum + cal*sign ;
            sign = sign*(-1);
        }
    }
    printf("The Sum : %f",sum);
    return 0 ;
}