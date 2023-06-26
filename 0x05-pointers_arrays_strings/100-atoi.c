#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *str)
{
int index = 0;
int minusCount = 0;
int number = 0;
int length = 0;
int foundDigit = 0;
int digitValue = 0;

while (str[length] != '\0')
length++;

while (index < length && foundDigit == 0)
{
if (str[index] == '-')
++minusCount;

if (str[index] >= '0' && str[index] <= '9')
{
digitValue = str[index] - '0';
if (minusCount % 2)
digitValue = -digitValue;

number = number * 10 + digitValue;
foundDigit = 1;
if (str[index + 1] < '0' || str[index + 1] > '9')
break;

foundDigit = 0;
}
index++;
}
if (foundDigit == 0)
return (0);
return (number);
}
