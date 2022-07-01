/*WAP to capitalize first character of each word of a string entered through keyboard.
Reverse strings stored in an array of pointers
*/
#include<stdio.h>
#include<string.h>
void Capitalize(char*);
int main(){
    //char *st = "Anirban basak is a god !!"; // Isnt working if we use char *st = "Ani";
    char st[50];
    printf("Enter the String : ");
    gets(st);
    Capitalize(st);
    printf("The Modified String is : ");
    puts(st);
    return 0;
}
void Capitalize(char* address_of_st){
    address_of_st++;
    int temp ;
    while(*address_of_st != '\0'){
        if(((*(address_of_st-1))==' ')&&(*address_of_st>= 'a')&&(*address_of_st<= 'z')){
            temp = (int)*address_of_st;
            temp = temp - 32 ;
            *address_of_st = (char)temp ;
        }
        address_of_st++;
    }
}