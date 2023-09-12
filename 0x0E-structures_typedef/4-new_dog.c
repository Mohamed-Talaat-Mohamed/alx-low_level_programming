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
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	return NULL;

	newDog->name = (char *)malloc(strlen(name) + 1);
	newDog->owner = (char *)malloc(strlen(owner) + 1);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return NULL;
	}
	_strcpy(newDog->name, name);
	_newDog->age = age;
	_strcpy(newDog->owner, owner);
	return newDog;
}
