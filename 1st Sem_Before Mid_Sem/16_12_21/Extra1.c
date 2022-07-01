#include <stdio.h>
int reverse(int );
int palindrome(int);
int main(){
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    if(palindrome(num)==1)
        printf("It is a Palindrome !!");
    else
        printf("It is Not a Palindrome !!");

}
int palindrome(int num){
    return(reverse(num)==num);
}
int reverse(int num){
    int rem,new_num;
    new_num = 0;
    while(num>0){
        rem = num%10;
        new_num = new_num*10 + rem; 
        num = num / 10;
    }
    return new_num;
}