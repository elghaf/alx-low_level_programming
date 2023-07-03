#include "main.h"

/**
 * _strstr - Entry point
 * @str1: input
 * @str2: input
 * Return: A pointer to the first occurrence of the substring str2 in the string str1, or NULL if the substring is not found.
 */
char *_strstr(char *str1, char *str2)
{
    for (; *str1 != '\0'; str1++)
    {
        char *ptr1 = str1;
        char *ptr2 = str2;

        while (*ptr1 == *ptr2 && *ptr2 != '\0')
        {
            ptr1++;
            ptr2++;
        }

        if (*ptr2 == '\0')
            return str1;
    }

    return ("\0");
}
