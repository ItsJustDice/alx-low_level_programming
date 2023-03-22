#include "3-calc.h"
#include <stdio.h>
/**
 * main - performs simple operations
 * @argc: number of arguements
 * @srgv: array of arguements
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char s;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc !=4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	s = *argv[2];

	if ((s == '/' || s == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(num1, num2);

	printf("%d\n", result);

	return (0);
}
