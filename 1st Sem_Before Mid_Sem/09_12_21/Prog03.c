//Q3. Implement a function factorial  that calculates the factorial of an integer.
#include <stdio.h>
int fact(int);
int main(){
    int a,f;
    printf("Enter the Number : ");
    scanf("%d",&a);
    f = fact(a);
    printf("The Result is : %d",f);
    return 0;
}
int fact(int a){
    int i,f;
    f = 1;
    for(i=1;i<=a;i++){
        f = f*i;
    }
    return f;
}