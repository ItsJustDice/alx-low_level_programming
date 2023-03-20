#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Entry point
 * Description: a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_c - typedef for struct dog
 */
typedef struct dog dog_c;

void init_dog(struct dog *a, char *name, float age, char *owner);
void print_dog(struct dog *a);
dog_c *diffrent_dog(char *name, float age, char *owner);
void new_dog(dog_c *a);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
