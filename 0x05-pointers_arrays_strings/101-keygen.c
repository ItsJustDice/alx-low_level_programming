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
	while (num <= 2645)
	{
		i = rand() % 128;
		num += i;
		putchar(i);

	}
	putchar(2772 - num);
	return (0);
}
