#include "main.h"
#include <stdio.h>
/**
 * int add - Entry point
 * Description: a function that adds two integers and returns the result
 * Return: result 0
 */
int add(int a, int b)
{
	int result = a + b;

	if (result < 0)
	{
		_ putchar('-');
		result = -result;
	}
	if (result > 9)
	{
		int power = 1;
		while (power * 10 <= result);
		{
			power *= 10;
		}
		 while (power > 0)
		 {
			 int digit = result / power;
			 _putchar(digit + '0');
			 result -= digit * power;
			 power /= 10;
		 }
	}
	else
	{
		putchar(result + '0');
	}
	_putchar('\n');
	return result;
}
