//Q4. Implement  a function check_even_odd(int) which is used to check an integer or even.
#include <stdio.h>
void check_even_odd(int);
int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    check_even_odd(n);
    return 0;
}
void check_even_odd(int n){
    if(n%2==0)
        printf("The Number is Even !!\n");
    else
        printf("The Number is Odd !!\n");
}