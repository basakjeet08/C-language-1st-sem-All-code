#include <stdio.h>

void check_address(int num);
int main(){

    int num ;
    printf("Enter the Value of the Variable : ");
    scanf("%d",&num);

    int *address_of_num = &num;
    check_address(num);
    printf("The Adress of the Variable from Main is : %u",address_of_num);
    return 0;
}

void check_address(int num){
    printf("Called in Function :--------------- \n");
    printf("The adress of the Variable : %u \n",&num);
}