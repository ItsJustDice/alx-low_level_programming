#include "main.h"
/**
 * *cap_string - Entry point
 * Description: Capitalizes all words of a string
 * @str: Character
 * Return: char
 */
char *cap_string(char *str)
{
	int a = 0;
	int cap = 1;

	while (str[a] != '\0')
	{
		switch (str[a])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				cap = 1;
				break;
			default:
				if (cap)
				{
					str[a] = (str[a] >= 'a' && str[a] <= 'z') ? str[a] - 'a' + 'A' : str[a];
					cap = 0;
				}
				break;
		}
		a++;
	}
	return (str);
}
