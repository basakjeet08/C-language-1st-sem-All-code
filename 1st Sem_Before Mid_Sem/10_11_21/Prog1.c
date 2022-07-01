//Q1
#include <stdio.h>

int main()
{
    int teacher,student ;
    float ratio ;
    printf("Enter the No. of Teachers : ");
    scanf("%d",&teacher);
    printf("Enter the No. of Students : ");
    scanf("%d",&student);
    ratio = (float)student/teacher;
    
    printf("The Student to Teacher Ration is : %f",ratio);
    
    return 0;
}