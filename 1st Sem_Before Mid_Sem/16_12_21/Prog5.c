//Q5.  int power( int,int)
#include <stdio.h>
int power(int , int);
int main(){
    int num_1880,pow_1880,flag_1880;
    printf("Enter the Number : ");
    scanf("%d",&num_1880);
    printf("Enter the Power : ");
    scanf("%d",&pow_1880);
    flag_1880 = power(num_1880,pow_1880);
    printf("Output : %d",flag_1880);
    return 0;
}
int power(int num,int pow){
    int i_1880,output;
    output = 1;
    for(i_1880=1;i_1880<=pow;i_1880++){
        output = output * num ;
    }
    return output;
}