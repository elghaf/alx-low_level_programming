#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name pointer to function
 * @name: string name
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || !f)
return;
f (name);
}