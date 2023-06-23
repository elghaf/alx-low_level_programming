#include "main.h"

/**
* _isdigit - check if numbers are 0 - 9
* @carac: char to be checked
*
* Return: 0 or 1
*/

int _isdigit(int carac)
{
if (carac >= '0' && carac <= '9')
return (1);
else
return (0);
}
