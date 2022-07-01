#include<stdio.h>
struct a{
    int roll;
    char name[30];
    char dep[30];
    char cou[30];
    int year;
};
void stud_data(struct a stud[4]);
int main()
{
    struct a stud[4];
    for(int i=0;i<2;i++){
        printf("Enter roll : \n");
        scanf("%d",&stud[i].roll);
        getchar();
        printf("Enter name : \n");
        gets(stud[i].name);
        printf("Enter department : \n");
        gets(stud[i].dep);
        printf("Enter course : \n");
        gets(stud[i].cou);
        printf("Enter year of entry : \n");
        scanf("%d",&stud[i].year);
    }
    stud_data(stud);
return 0;
}

void stud_data(struct a stud[4]){
    for(int i=0;i<2;i++){
        printf("%d\t",stud[i].roll);
        printf("%s",stud[i].name);
        printf("\t");
        printf("%s",stud[i].dep);
        printf("\t");
        printf("%s",stud[i].cou);
        printf("\t");
        printf("%d\n",stud[i].year);
    }
}