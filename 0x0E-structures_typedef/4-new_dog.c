#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function pointer that creates a new dog
 * @name: first element (type char)
 * @age: second element (type float)
 * @owner: thrid element (type char)
 * @a_idk
 * Return: NULL if (1)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int name1, age1, owner1;

	if ((owner == NULL) || (name == NULL))
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (name1 = 0; name[name1]; name1++)
		;
	name1 += 1;
	dog->name = malloc(sizeof(char) * name1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (age1 = 0; age1 < name1; age1++)
		dog->name[age1] = name[age1];
	dog->age = age;
	for (owner1 = 0; owner[owner1]; owner1++)
		;
	owner1++;
	dog->owner = malloc(sizeof(char) * owner1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (age1 = 0; age1 < owner1; age1++)
	{
		dog->owner[age1] = owner[age1];
	}
	return (dog);
}
