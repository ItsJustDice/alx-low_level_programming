#include "main.h"
/**
 * prime - Entry point
 * Description: Prime number
 * @n: Integer
 * @i: Integer
 * Return: 1 if prime number 0 otherwise
 */
int prime(int n, int i)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
/**
 * is_prime_number - Entry point
 * Description: Prime number
 * @n: Integer
 * Return: 1 if prime number 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
