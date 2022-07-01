#include <stdio.h>
int main(){
    int a,b=3,c=1;
    //a = ++b + b++ + b--;
    a = b++ + b++ + b++ ;

    c = (a+b);
    printf("The value of a : %d \n",a);
    printf("The value of b : %d\n",b);
    printf("The value of c : %d\n",c);
    return 0;
}