#include "main.h"
/**
 * palindrome - Entry point
 * Description: Get the start
 * @s: Character
 * Return: 1 if palindrome 0 otherwise
 */
int palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + palindrome(s + 1));
}
/**
 * _palindrome - Entry point
 * Description: Checking Palindrome
 * @s: Character
 * @start: Integer
 * @end: Integer
 * Return: 1 if palindrome 0 otherwise
 */
int _palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*(s + start) == *(s + end))
	{
		return (_palindrome(s, start + 1, end - 1));
	}
	return (0);
}
/**
 * is_palindrome - Entry point
 * Description: String palindrome
 * @s: Character
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = palindrome(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (_palindrome(s, 0, len - 1));
}
