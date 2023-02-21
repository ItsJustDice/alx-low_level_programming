#include "main.h"
/**
 * _islower - Entry point
 * @c: This is a variable
 * Description: Checking for lowercase charcters
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
		return (1);
	else
		return (0);
}
