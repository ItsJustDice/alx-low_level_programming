#include "3-calc.h"
/**
 * get_op_func - Entry point
 * Description: Selects the correct function to perform
 * @s: The operator passed as argument
 * Return: pointer to the function corresponding to operator given parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j = 0;

	while (ops[j].op != NULL)
	{
		if (*(ops[j].op) == *s)
		{
			return (ops[j].f);
		}
		j++;
	}

	return (NULL);
}
