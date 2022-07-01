//Q4
#include <stdio.h>
int main()
{
    char str1_1880[400];
    char str2_1880[100];
    char *user_strcat(char*, char*);
    printf("\nEnter first string: ");
    gets(str1_1880);
    printf("Enter second string: ");
    gets(str2_1880);
    printf("\nConcatenated String: ");
    user_strcat(str1_1880, str2_1880);
    puts(str1_1880);
    printf("\n");
    return 0;
}
char *user_strcat(char *s1, char *s2)
{
    while (*s1 != '\0')
    {
        s1++;
    } 
    while (*s2 != '\0')
    {
        *s1++ = *s2++;
    }
    *s1 = '\0';
    return s1;
}