#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: generates random passwords
 * Return: void
 */
int main(void)
{
	int num;
	char i;

	srand(time(NULL));
	while (num <= 4568)
	{
		i = rand() % 97;
		num += i;
		putchar(i);

	}
	putchar(3509 - num);
	return (0);
}
