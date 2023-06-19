#include "main.h"
/**
 * _isdigit - Entry point
 * Description - a function that checks for a digit 0 through 9
 * @c: Integer
 * Return: 1 if success, 0 if failure
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
