#include <stdio.h>
int main(){

  int principal , time;
  float rate = 0.0 ;
  float interest;
  printf("Enter the Principal Amount : ");
  scanf("%d",&principal);
  printf("Enter the Time : ");
  scanf("%d",&time);

  switch(time){

    case 1 :
      rate = 8.0;
      break ;

    case 2 :
      rate = 9.0;
      break;

    case 3 :
      rate = 10.0;
      break;
    default :
        printf("The Enter Values are wrong !!");
  }

  interest =(float)(principal*rate*time)/100.0;
  printf("The Interest is %f",interest);

  return 0;

}
