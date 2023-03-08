#include "main.h"
/**
 * palindrome - Entry point
 * Description: returns 1 if a string is a palindrome and 0 if not
 * @s: Character
 * @start: Integer
 * @end: Integer
 * Return: 1 if string palindrome, 0 otherwise
 */
int palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - Entry point
 * Description: returns 1 if a string is a palindrome and 0 if not
 * @s: Character
 * Return: 1 if string palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (0);
}
