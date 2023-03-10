#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the number of arguments passed into it
 * @argc: number od arguements
 * @argv: array of arguements
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
