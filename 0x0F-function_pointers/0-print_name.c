#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - pointer to function to print name
 * @name: name to print
 * @f: the function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || !f)
return;
f (name);
}