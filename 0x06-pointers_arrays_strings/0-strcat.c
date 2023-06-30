#include "main.h"

/**
 * _strcat - concatenate two var
 * @firt_string: contain string to concatenat with 
 * @second_string: second string
 * Return: pointer to resulting string.
 */

char *_strcat(char *first_string,char *second_string)
{
int first = 0,second = 0;
char result;

while(first_string[first])
{
first++;
}
result = first_strinng;
for (second=0; second_string[second] != 0;second++)
{
	result[second] = second_string[second];
	second++;
}
result[second] = '\0';
return(result);
}
