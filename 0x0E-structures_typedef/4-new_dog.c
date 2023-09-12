#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name member of the dog
 * @age: age member of the dog
 * @owner: owner member of the dog
 *
 * Return: pointer to the new dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
	return NULL;

	dog->name = (char *)malloc(strlen(name) + 1);
	dog->owner = (char *)malloc(strlen(owner) + 1);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return NULL;
	}
	strcpy(dog->name, name);
	dog->age = age;
	strcpy(dog->owner, owner);
	return (dog);
}
