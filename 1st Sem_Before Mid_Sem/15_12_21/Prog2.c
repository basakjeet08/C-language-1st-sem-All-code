#include <stdio.h>
int find_factorial(int);
int permutation(int,int);
int main()
{
    int r,n,output;
    printf("Enter the Value of permutation :---------------\n");
    printf("n : ");
    scanf("%d",&n);
    printf("r : ");
    scanf("%d",&r);
    output = permutation(n,r);    
    if(r>n){
        output = output * (-1);
    }
    printf("Output : %d",output);
    return 0;
}
int permutation(int n,int r){
    int output = find_factorial(n)/find_factorial(n-r);    
    return output;
}
int find_factorial(int n){
    int i,output;
    output = 1;
    if(n<0)
        n = n*(-1);       
    for(i=1;i<=n;i++){
        output = output * i;
    }
    return output;
}