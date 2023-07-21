#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - Returns the sum of two ints.
* @a: The first int.
* @b: The second int.
*
* Return: The sum of a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - Returns the difference of two ints.
* @a: The first int.
* @b: The second int.
*
* Return: The difference of a and b.
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - Returns the product of two ints.
* @a: The first int.
* @b: The second int.
*
* Return: The product of a and b.
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - Returns the division of two ints.
* @a: The first int.
* @b: The second int.
*
* Return: The quotient of a and b.
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - Returns the remainder of the division of two ints.
* @a: The first int.
* @b: The second int.
*
* Return: division of a by b.
*/
int op_mod(int a, int b)
{
return (a % b);
}