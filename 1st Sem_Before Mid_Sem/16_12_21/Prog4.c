//Q4.  Smallest among 4 integers using int  min(int,int)
#include <stdio.h>
int min(int , int );
int main(){
    int num_1_1880,num_2_1880, num_3_1880,num_4_1880, flag_1880;
    printf("Enter the 1st Number : ");
    scanf("%d",&num_1_1880);
    printf("Enter the 2nd Number : ");
    scanf("%d",&num_2_1880);
    printf("Enter the 3rd Number : ");
    scanf("%d",&num_3_1880);
    printf("Enter the 4th Number : ");
    scanf("%d",&num_4_1880);
    flag_1880 = min(min(num_1_1880,num_2_1880),min(num_3_1880,num_4_1880));
    printf("The Minimum is %d",flag_1880);
    return 0 ;
}
int min(int num_1 , int num_2){
    if(num_1>num_2)
        return num_2;
    return num_1;
}