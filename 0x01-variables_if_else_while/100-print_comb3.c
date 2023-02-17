#include <stdio.h>
/**
 * main - Entry point
 * Description - The more brains, less material you need
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
