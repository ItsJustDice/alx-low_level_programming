#include "main.h"
/**
 * _atoi - Entry point
 * Description: String to Integer
 * @s: Integer
 * Return: char
 */
int _atoi(char *s)
{
	int num = 1;
	unsigned int ans = 0;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			num *= -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		ans = ans * 10 + (*s - '0');
		s++;
	}
	return (num * ans);
}
