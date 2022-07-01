#include <stdio.h>
int main(){

  char c;

  printf("Enter The Character : ");
  scanf("%c", &c);

  if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z')){

    switch(c){

      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        printf("It is a Vowel !!");
        break;
      default:
        printf("It is a Consonant !!");
    }
  }
  else
    printf("It is not a Valid Character !!");

  return 0;

}
