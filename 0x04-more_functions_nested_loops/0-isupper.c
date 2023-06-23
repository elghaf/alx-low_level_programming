#include "main.h"

/**
* _isupper - uppercase letters
* @carac: char to check
*
* Return: 0 or 1
*/

int _isupper(int carac)
{
if (carac >= 'A' && carac <= 'Z')
return (1);
else
return (0);
}
