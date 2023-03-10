#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints the minimum number of coins to make change
 * @argc: Number of arguments
 * @argv: Array of numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, coins, cents, num_cur;
	int currency[] = {25, 10, 5, 2, 1};
	/* Coin currency available */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
		/* Check for correct no. of arguments */
	}
	cents = atoi(argv[1]);
	/* Converts argument to Int */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
		/* Check for -ve input */
	}
	coins = 0;
	num_cur = sizeof(currency) / sizeof(currency[0]);
	/* Number of currency */
	for (j = 0; j < num_cur; j++)
	{
		coins += cents / currency[j];
		/* Add no of coins for current currency */
		cents %= currency[j];
		/* What is the remaining currency */
	}
	printf("%d\n", coins);/* Minimum no of coins */
	return (0);
}
