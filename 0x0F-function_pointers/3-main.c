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
	char (*op_func);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = argv[2];

	if (get_op_func(op_func) == NULL || op_func[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(op_func)(num1, num2);

	printf("%d\n", result);

	return (0);
}
