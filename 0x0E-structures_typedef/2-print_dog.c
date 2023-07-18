/* include header files */
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints s struct dog
 * @d: structure pointer
 * @a_idk
 *
 * Return: Nada, just element or nil
 */

void print_dog(struct dog *d)
{
	/* Element "Name" */
	if (d)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		/* Element "Age" */
		printf("Age: %.6f\n", d->age);

		/* Element "owner" */
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
