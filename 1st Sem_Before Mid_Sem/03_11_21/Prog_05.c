#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,D,r_1,r_2,root;
    
    printf("Enter the Values of a,b,c :\n");
    scanf("%f%f%f",&a,&b,&c);
    
    D = (b*b) - (4.0*a*c);
    
    if((D>0)&&(a!=0)){
        r_1 = (-b+sqrt(D))/(2*a);
        r_2 = (-b-sqrt(D))/(2*a);
        
        printf("\nRoots are %f and %f",r_1,r_2);
    }
    else if((D == 0)&&(a!=0)){
        root = b/(2*a);
        
        printf("\nRoot is %f",root);
    }
    else
        printf("\nCant be Determined");

    return 0 ;
}