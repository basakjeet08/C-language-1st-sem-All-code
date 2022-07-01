//Q6
#include <stdio.h>
struct student
{
  char name_1880[30];
  int roll_1880;
  float marks_1880;
};
int main()
{
  struct student s_1880[3];
  int i;
  for(i=0;i< 3;i++)
  {
    printf("\nEnter name of the student: ");
    scanf("%s",s_1880[i].name_1880);
    printf("Enter the roll no: ");
    scanf("%d",&s_1880[i].roll_1880);
    printf("Enter the marks obtained by the student: ");
    scanf("%f",&s_1880[i].marks_1880);
  }
  printf("Details of the student are:\n");
  for(i=0;i<3;i++)
  {
    printf("Name: %s\n",s_1880[i].name_1880);
    printf("Roll: %d\n", s_1880[i].roll_1880);
    printf("Marks: %0.2f\n\n", s_1880[i].marks_1880);
  }
  return 0;
}