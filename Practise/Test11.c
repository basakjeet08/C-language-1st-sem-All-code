#include <stdio.h>

int main(){
    int num = 57;
    int *address_of_num = &num;
    int **address_of_address_of_num = &address_of_num;

    printf("The Value of the Variable : %d\n",**address_of_address_of_num);
    printf("The Value of the Variable : %d\n",*address_of_num);
    printf("The Value of the Variable : %d\n",*(&num));
    printf("The Value of the Variable : %d\n",*);
    return 0;
}