#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest.
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
    int index = 0;

    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }

    dest[index] = '\0';
    return dest;
}
