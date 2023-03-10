#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: Adds positive numbers
 * @argc: number of arguments
 * @argv: Array numbers
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int k, j, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (k = 1; k < argc; k++)
	{
		for (j = 0; argv[k][j] != '\0'; j++)
		{
			if (!isdigit(argv[k][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
