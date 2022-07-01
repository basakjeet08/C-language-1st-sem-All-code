//Q3
#include <stdio.h>
struct employee{
    int id;
    int age;
    float salary;
};

int main()
{
    struct employee E1_1880;

    printf("\nEnter member id: ");
    scanf("%d", &E1_1880.id);
    printf("Enter member age: ");
    scanf("%d", &E1_1880.age);
    printf("Enter member salary: ");
    scanf("%f", &E1_1880.salary);

    printf("\nMember id: %d\n", E1_1880.id);
    printf("Member age: %d\n", E1_1880.age);
    printf("Member salary: %f", E1_1880.salary);

    return 0;
}