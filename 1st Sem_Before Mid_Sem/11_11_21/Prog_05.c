#include <stdio.h>
int main(){

  char c ;
  int x ;

  printf("Enter the Alphabet : ");
  scanf("%c",&c);

  if((c>='a')&&(c<='z')){
    x = (int)c - 32;
    printf("The Character is : %c",x);

  }
  else if((c>='A')&&(c<='Z')){
    x = (int)c + 32;
    printf("The Character is : %c",x);
  }
  else
    printf("The Character is Invalid !!");

  return 0;

}
