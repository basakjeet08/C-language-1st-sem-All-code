#include <stdio.h>
int main(){

  int x ;
  printf("Enter the Number : ");
  scanf("%d",&x);

  if((x<=256) && (x>=0)){
  char ch = (char)x;

  printf("The correspoiding Character is : %c",ch);
  }
  else
    printf("Wrong Input !!");


  return 0;

}
