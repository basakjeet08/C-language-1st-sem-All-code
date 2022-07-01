#include<stdio.h>
#include <string.h>
void Check_Vowels(char*);
//void Change_Spaces(char*,char*);
void Modify_Name(char*,char*,int);
int main(){
    char name[100];
    char modified_name[100];
    int roll ;
    printf("Enter your Name : ");
    gets(name);
    printf("Enter your Roll No. : ");
    scanf("%d",&roll);

    Check_Vowels(name);
    //Change_Spaces(name,modified_name);
    Modify_Name(name,modified_name,(roll%10));
    puts(modified_name);
    return 0;
}
void Check_Vowels(char *ptr){
    int count;
    count = 0;
    while(*ptr != '\0'){
        if((*ptr=='a')||(*ptr=='e')||(*ptr=='i')||(*ptr=='o')||(*ptr=='u')||(*ptr=='A')||(*ptr=='E')||(*ptr=='I')||(*ptr=='O')||(*ptr=='U'))
            count ++;
        ptr++;
    }
    printf("The Number of Vowels are : %d \n",count);
}
/*void Change_Spaces(char* name, char* modified){
    char First_Letter = *name;
    while(*name != '\0'){
        if((*name == ' '))
            *modified = First_Letter;
        else
            *modified = *name ;
        modified++;
        name++;
    }
    *modified = '\0';
    printf("The Modified Name : ");
}
*/
void Modify_Name(char* name,char* modified ,int no_of_spaces){
    int i = 0;
    char First_Letter = *name;
    while(*name != '\0'){
        if((*name == ' '))
            *modified = First_Letter;
        else
            *modified = *name ;
        modified++;
        name++;
        for(i=0;i<no_of_spaces;i++){
            *modified = ' ';
            modified++;
        }
    }
    printf("The Modified Name : ");
}