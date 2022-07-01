//Q3
#include <stdio.h>
int main()
{
    char str_1880[100];
    char copy_str_1880[100];
    char *user_strcopy(char*, char*);

    printf("Enter a string: ");
    gets(str_1880);

    printf("Copied string: ");
    user_strcopy(copy_str_1880, str_1880);
    puts(copy_str_1880);

    return 0;
}
char *user_strcopy(char *x, char *y)
{
    while (*y != '\0')
    {
        *x = *y;
        y++;
        x++;
    } 
    *x = '\0';
    return x;
}