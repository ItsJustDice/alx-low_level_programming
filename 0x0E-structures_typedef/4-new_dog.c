#include <stdlib.h>
#include "dog.h"
/**
 * _strlen -finds the length of a string
 * @str: string to be measured
 * Return: Lenght of the string
 */
int _strlen(char *str)
{
	int i;

	while (*str++)
		i++;
	return (i);
}
/**
 * _strcopy - copies string, terminating null byte, buffer pointer to dest
 * @dest: storing string copy
 * @src: source string
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int matrix = 0;

	for (matrix = 0; src[matrix]; matrix++)
		dest[matrix] = src[matrix];

	dest[matrix] = '\0';
	return (dest);
}
/**
 * new_dog - Creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}

	doggie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}

	doggie->name = _strcopy(doggie->name, name);
	doggie->age = age;
	doggie->owner = _strcopy(doggie->owner, owner);

	return (doggie);
}
