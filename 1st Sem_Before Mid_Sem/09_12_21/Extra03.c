/*WAP to find out if the number is :----
    1. Positive or Negative
    2. Even or Odd
    3. Prime or Composite
    4. Perfect or not
    5. Armstrong or not
    6. Palindrome or not
*/
#include <stdio.h>
void PosNeg();
void EvenOdd();
void PrimeComp();
void Perfect();
void Armstrong();
void Palindrome();
int num;
int main()
{
    printf("Enter the Number : ");
    scanf("%d",&num);
    PosNeg();
    EvenOdd();
    PrimeComp();
    Perfect();
    Armstrong();
    Palindrome();


    return 0;
}

void PosNeg(){
    if(num<0){
        printf("The Number is Negative !!\n");
    }
    else{
        printf("The number is Positive !!\n");
    }

}

void EvenOdd(){
    if(num%2==0)
        printf("The Number is Even !!\n");
    else
        printf("The Number is Odd !!\n");
}

void PrimeComp(){
    int i,flag;
    flag = 0;
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            flag = 1;
            break;
        }   
    }
    if(flag==1)
        printf("The Number is Composite !!\n");
    else
        printf("The Number is Prime !!\n");
}

void Perfect(){
    int i,sum ;
    sum = 0;
    for(i=1;i<=num/2;i++){
        if(num%i==0)
            sum+= i;
    }
    if(sum==num)
        printf("The Number is a Perfect Number !!\n");
    else
        printf("The Number is not a Perfect Number !!\n");

}

void Armstrong(){
    int n = num ;
    int rem,sum;
    sum = 0;
    while(n>0){
        rem = n%10;
        n = n/10;
        sum = sum+(rem*rem*rem);
    }
    if(sum==num)
        printf("The Number is a Armstrong Number !!\n");
    else
        printf("The number is not a Armstrong Number !!\n");
}

void Palindrome(){
    int n = num;
    int new_num,rem;
    new_num = 0;

    while(n>0){
        rem = n%10;
        new_num = new_num*10 + rem;
        n = n/10;
    }
    if(new_num==num)
        printf("It is an Palindrome !!\n");
    else
        printf("It is not a Palindrome !!\n");
}