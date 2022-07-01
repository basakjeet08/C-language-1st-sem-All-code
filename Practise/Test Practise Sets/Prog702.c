/*
WAP to swap three numbers in cyclic order using Call by Reference. In other words,
WAP that takes three variable (a, b, c) in as separate parameters and rotates the 
values stored so that value a goes to b,b to c and c to a
*/
#include <stdio.h>
void Swapping(int* ,int* ,int* );
int main(){
    int a,b,c;
    
    printf("Enter the Value of A : ");
    scanf("%d",&a);
    printf("Enter the Value of B : ");
    scanf("%d",&b);
    printf("Enter the Value of C : ");
    scanf("%d",&c);

    printf("Before Swapping :--------------\n");
    printf("A : %d \n",a);
    printf("B : %d \n",b);
    printf("C : %d \n",c);

    Swapping(&a,&b,&c);

    printf("After Swapping :--------------\n");
    printf("A : %d \n",a);
    printf("B : %d \n",b);
    printf("C : %d \n",c);

    return 0 ;

}
void Swapping(int *a,int *b,int *c){
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;    
}