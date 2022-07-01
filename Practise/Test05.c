#include <stdio.h>
int main()
{
    char str[100];
    int length_1881;
    int user_strlen(char *);

    printf("Enter the string: ");
    gets(str);

    length_1881 = user_strlen(str);
    printf("Length of given string is: %d", length_1881);

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