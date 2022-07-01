//Q5
#include <stdio.h>
int main()
{
    char leftStr_1880[400];
    char rightStr_1880[100];
    int user_strcmp(char*, char*);
    int res_1880;
    printf("\nEnter first string (leftStr): ");
    gets(leftStr_1880);
    printf("Enter second string (rightStr): ");
    gets(rightStr_1880);
    res_1880 = user_strcmp(leftStr_1880, rightStr_1880);
    if (res_1880 == 0)
        printf("Strings are equal");
    else
    {
        if (res_1880 > 0)
            printf("leftStr has greater ASCII value than rightStr");
        else
            printf("rightStr has greater ASCII value than leftStr");
    }
    printf("\n");
    return 0;
}
int user_strcmp(char *left, char *right)
{
    while(((*left != '\0') && (*right != '\0')) && (*left == *right))
    {
        left++;
        right++;
    }
    if(*left == *right)
        return 0;
    else
        return (*left - *right);
}