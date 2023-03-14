#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Description: concatenates all the arguments of your program
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i, r, l = 0, j = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (r = 0; av[i][r]; r++)
			j++;
	}
	j += ac;
	result = malloc(sizeof(char) * j + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	for (r = 0; av[i][r]; r++)
	{
		result[l] = av[i][r];
		l++;
	}
	if (result[l] == '\0')
	{
		result[l++] = '\n';
	}
	return (result);
}
