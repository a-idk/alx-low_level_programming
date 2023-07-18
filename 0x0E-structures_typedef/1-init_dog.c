/* include header file */
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: structure pointer
 * @name: (type char) name of the dog pointer
 * @age: (type float) dog's age
 * @owner: (type char) owner of the dog pointer
 * @a_idk
 *
 * Return: Nada!
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
