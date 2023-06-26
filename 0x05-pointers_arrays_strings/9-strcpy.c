#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to dest.
 * @dest: buffer
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
    int length = 0;
    int x = 0;

    while (*(src + length) != '\0')
    {
        length++;
    }
    for (; x < length; x++)
    {
        dest[x] = src[x];
    }
    dest[length] = '\0';
    return dest;
}
