#include "main.h"
#include <stdio.h>
/**
 * FizzBuzz - Entry point
 * Description - a program that prints the numbers from 1 to 100
 * Return: 0
 */
int FizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
