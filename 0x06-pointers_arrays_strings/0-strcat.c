#include "main.h"

/**
 * _strcat - concatenate two var.
 * @first_string: contain string to concatenat with 
 * @second_string: second string
 * Return: pointer to resulting string.
 */
char *_strcat(char *first_string,char *second_string)
{
int first = 0,second = 0;
while(first_string[first])
{
first++;
}
for (second=0; second_string[second] != 0;second++)
{
first_string[first] = second_string[second];
first++;
}
first_string[first] = '\0';
return(first_string);
}
