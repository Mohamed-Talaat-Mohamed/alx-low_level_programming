#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a function that prints a struct dog
 *
 * @d: apinter to struct dog
 *
 * Return: nothing if d is NULL
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL || d->owner != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Name:(nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner:(nil)\n");
	}
}
