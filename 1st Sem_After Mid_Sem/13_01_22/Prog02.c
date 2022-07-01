//Q2
#include <stdio.h>
int main()
{
    char str[100];
    int length_1880;
    int user_strlen(char *);

    printf("Enter the string: ");
    gets(str);

    length_1880 = user_strlen(str);
    printf("Length of given string is: %d", length_1880);

    return 0;
}

int user_strlen(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}