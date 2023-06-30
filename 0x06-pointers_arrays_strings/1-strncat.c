#include "main.h"

/**
 * *_strncat - concatenate also two strings.
 * Description: concatenate strings.
 * @first_string : destination string.
 * @second_string : source string.
 * @n : number of bytes from the second_string.
 * 
 **/
char *_strncat(char *first_string, char *second_string, int n)
{
    int lenght_string = 0, i =0;

    while (first_string[i++])
    {
        lenght_string++;
    }
    for ( i = 0; second_string[i] && i < n ; i++)
    {
        /* code */
        first_string[lenght_string++] = second_string[i];
    }
    return (first_string); 
}