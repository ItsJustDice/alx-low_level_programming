#include "main.h"
/**
 * *leet - Entry point
 * Description: Encodes a string into 1337
 * @str: Character
 * Return: char
 */
char *leet(char *str)
{
	char *enc = str;
	char *letter = "aAeEoOtTlL";
	char *num = "4433007711";
	int x, j;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (j = 0; j < 8; j++)
		{
			if (str[x] == letter[j])
			{
				enc[x] = num[j];
				break;
			}
		}
	}
	return (enc);
}
