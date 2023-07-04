#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer of the pointer.
 * @to: pointer of character
 */

void set_string(char **s, char *to)
{
	*s = to;
}
