#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("Enter the 3 Numbers : \n");
    scanf("%d %d %d",&a,&b,&c);
    
    if((a>b)&&(a>c)){
        printf("\n%d is the Greatest ",a);
    }
    else if((b>a)&&(b>c)){
        printf("\n%d is the Greatest ",b);
    }
    else
        printf("\n%d is the Greatest ",c);

    return 0;
}