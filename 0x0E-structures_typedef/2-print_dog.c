#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age:  (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - lenght of string
 * @str: string to be measured
 * Return: lenght of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}
/**
 * _strcopy - copies string, terminating null byte, buffer pointer to dest
 * @dest: storing string copy
 * @src: The source string
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
 * Return: The new struct dog
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
