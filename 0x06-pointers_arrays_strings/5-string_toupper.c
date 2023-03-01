#include "main.h"
/**
 * *string_toupper - Entry point
 * Description: changes all lowercase letters of a string to uppercase
 * @str: Character
 * Return: char
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
