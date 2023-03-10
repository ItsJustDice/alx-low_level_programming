#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all arguments it receives
 * @argc: number of arguements
 * @argv: array of arguement
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
