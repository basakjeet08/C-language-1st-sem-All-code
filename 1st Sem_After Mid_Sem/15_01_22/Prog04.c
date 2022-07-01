//Q4
#include <stdio.h>
#include <string.h>
struct student
{
    int name;
    int rollno;
    int s1; 
    int s2;
    int s3;
};
int main()
{
    struct student ST_1880;
    int avg_1880;
    printf("Enter name of student: ");
    scanf("%s", &ST_1880.name);
    printf("Enter the roll no of student: ");
    scanf("%d", &ST_1880.rollno);
    printf("\nEnter marks obtained in 1st subject: ");
    scanf("%d", &ST_1880.s1);
    printf("\nEnter marks obtained in 2nd subject: ");
    scanf("%d", &ST_1880.s2);
    printf("\nEnter marks obtained in 3rd subject: ");
    scanf("%d", &ST_1880.s3);
    avg_1880 = (ST_1880.s1 + ST_1880.s2 + ST_1880.s3) / 3;
    printf("Average marks of the student: %d", avg_1880);
    return 0;
}