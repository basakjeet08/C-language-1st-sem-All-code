//Q6
#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int i = 1;
    float sum = 0.0;
    float cal = 0.0;
    
    printf("Enter the Range : ");
    scanf("%d",&x);  
    while(i<=x){
        cal = 1/pow(x,i);       
        if(i%2==0)
            sum = sum - cal ;
        else 
            sum = sum + cal ;            
        i++;
    }
    printf("The Sum is : %f",sum);
    return 0;
}