#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type struct
 *
 * @name:first element
 * @age: seconf element
 * @owner: third element
 *
 * Description: a new type struct for a dog's information
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
