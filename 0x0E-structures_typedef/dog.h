#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct contain a data of dog`s
 *
 * @name: The name of the dog name
 *
 * @age: The dog age
 *
 * @owner: The name of the dog owner
 *
 * Description: a struct type used to enroll a data of dog`s
 *
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - a new type for struct dog
*/

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);



#endif
