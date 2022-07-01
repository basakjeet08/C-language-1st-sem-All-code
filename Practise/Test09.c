#include <stdio.h>

void Change_Data(int *);
int main(){

    int num ;
    int *address_of_num = &num ;

    printf("Enter the Value of the variable : ");
    scanf("%d",address_of_num);
    Change_Data(address_of_num);

    printf("The Changed Value of the Variable : %d",num);
    return 0;
}

void Change_Data(int *p){
    *p = *p * 10;
}