#include "main.h"
/**
 * _sqrt - Entry point
 * Description: Natural square root
 * @n: Integer
 * @i: Integer
 * Return: -1 if negative n if 0 or 1
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
/**
 * _sqrt_recursion - Entry point
 * Description: Natural square root
 * @n: Integer
 * Return: -1 if negative n if 0 or 1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 0));
	}
}
