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
	int x, z;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (x = 0; x < 8; x++)
		{
			if (str[x] == letter[z])
			{
				enc[x] = num[z];
				break;
			}
		}
	}
	return (enc);
}
