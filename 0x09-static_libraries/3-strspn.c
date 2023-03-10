#include "main.h"
/**
 * _strspn - Entry point
 * Description: Gets the length of a prefix substring
 * @s: Character
 * @accept: Character
 * Return: char
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int alp = 0;
	int x, j;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[x] == accept[j])
			{
				alp++;
				break;
			}
		}

		if (accept[j] == '\0')
		{
			return (alp);
		}
	}
	return (alp);
}
