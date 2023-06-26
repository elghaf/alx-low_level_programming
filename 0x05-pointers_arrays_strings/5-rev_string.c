#include "main.h"

/**
 * rev_string - reverses a string
 * @str: the string to reverse
 */
void rev_string(char *str)
{
    int length = 0;
    int i;

    while (str[length] != '\0')
        length++;

    for (i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
