#include "3-calc.h"
/**
 * op_add - Returns the sum of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Calculates the diffrence of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Calculates the product of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Calculates the divison of a and b
 * @a: The first integer
 * @b: The second integer
 * Return: result of the divison of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Calculates the remainder of the division of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: Remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
