#include <stdio.h>
int main(){

  int marks,internal,endsem,div;
  printf("Enter the Internal Marks : ");
  scanf("%d",&internal);
  printf("Enter the End Semester Marks : ");
  scanf("%d",&endsem);

  marks = internal + endsem;
  div = marks/10 ;

  switch(div){

    case 10 :
    case 9 :
      printf("The Grade is 0");
      break;

    case 8 :
      printf("The Grade is E");
      break;

    case 7 :
      printf("The Grade is A");
      break;

    case 6 :
      printf("The Grade is B");
      break;

    case 5 :
      printf("The Grade is C");
      break;

    case 4 :
      printf("The Grade is D");
      break;

    case 3 :
    case 2 :
    case 1 :
      printf("The Grade is F");
      break;
    default :
      printf("Wrong Value Entered !!");
  }
  return 0;

}

