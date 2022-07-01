#include <stdio.h>
int main()
{
    float a,b,m,c,d,n ;
    float x1 , x2 ;
    
    printf("First Equation \n");
    printf("Enter a,b and m of First Equation : \n");
    scanf("%f %f %f",&a,&b,&m);
    printf("Second Equation : \n");
    printf("Enter c,d and n of First Equation : \n");
    scanf("%f %f %f",&c,&d,&n);
    
    printf("%.0fX1+ %0.fX2 = %.0f \n",a,b,m);
    printf("%.0fX1+ %0.fX2 = %.0f \n",c,d,n);
    
    if((a*d) - (b*c)==0){
        printf("Not Possible ");
    }
    else{
        x1 = ((b*n)-(d*m))/((a*d) - (b*c));
        x2 = ((a*n)-(c*m))/((a*d) - (b*c));
    }
    
    printf("X1 = %f and X2 = %f",x1,x2);

    return 0;
}
