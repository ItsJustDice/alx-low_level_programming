#include "main.h"
#include <stdio.h>

/**
 * _atoi - Entry point
 * Description: program that multiplies two numbers
 * @n: Integer
 * Return: the int converted from the string
 */
int _atoi(char *n)
{
	int i, k, c, len, j, digit;

	i = 0;
	k = 0;
	c = 0;
	len = 0;
	j = 0;
	digit = 0;

	while (n[len] != '\0')
		len++;

	while (i < len && j == 0)
	{
		if (n[i] == '-')
			++k;

		if (n[i] >= '0' && n[i] <= '9')
		{
			digit = n[i] - '0';
			if (k % 2)
				digit = -digit;
			c = c * 10 + digit;
			j = 1;
			if (n[i + 1] < '0' || n[i + 1] > '9')
				break;
			j = 0;
		}
		i++;
	}
	if (j == 0)
		return (0);

	return (c);
}

/**
 * main - Entry point
 * description: multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}

