#include <stdio.h>

int main(){

    int num ;
    int *address_of_num = &num;
    printf("Enter the Value of the Variable : ");
    scanf("%d",address_of_num);

    printf("The Address of the variable is %u \n",address_of_num);
    printf("The value of the Variable is %d \n",*address_of_num);
    return 0;
}