#include "dog.h"
#include <stdlib.h>

/**
 * copy_str- copies string
 * @original: string to copy
 *
 * Return: pointer to copy
 */

char *copy_str(char *original)
{
	char *copy;
	int i, len;

	if (original == NULL)
	{
		return (NULL);
	}
	for (len = 0; original[len] != '\0'; len++)
	{
	}
	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; original[i] != '\0'; i++)
	{
		copy[i] = original[i];
	}
	copy[i] = '\0';
	return (copy);
}

/**
 * new_dog- creates a new dog
 * @name: name of dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_name = copy_str(name);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = new_name;
	new_dog->age = age;
	new_owner = copy_str(owner);
	if (new_owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = new_owner;

	return (new_dog);
}
