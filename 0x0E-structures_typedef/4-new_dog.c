#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Entry point
 * Description: Create new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: A pointer to the new dog struct, or NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Allocate memory for the new dog struct */
	dog_t *doggie = malloc(sizeof(dog_t));
	/* Doggie just a dog's name */
	/* Check if memory allocation failed */
	if (doggie == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for the name string */
	doggie->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	/* Allocate memory for the owner string */
	doggie->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}

	/* Copy the name and owner strings to the new struct */
	strcpy(doggie->name, name);
	strcpy(doggie->owner, owner);
	/* Set the age of the new dog */
	doggie->age = age;

	return (doggie);
}
