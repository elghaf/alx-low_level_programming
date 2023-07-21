#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform
 *               the operation by the user.
 * @s: the argument s.
 *
 * Return: pointer to the function to the operator
 *           given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int j = 0;

	while (*(ops[j].op) == *s || ops[j].op == NULL)
		j++;

	return (ops[j].f);
}