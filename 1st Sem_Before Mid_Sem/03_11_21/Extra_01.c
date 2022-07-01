#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,max;
    
    printf("Enter the 6 Numbers : \n");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    
    max = a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    if(max<d)
        max=d;
    if(max<e)
        max=e;
    if(max<f)
        max=f;
    printf("Max Number is : %d",max);
	
    return 0;
}

