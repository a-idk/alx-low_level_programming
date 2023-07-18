#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function that defines a new type struct dog with the fllg
 * @name: (type char) initialized first member - name
 * @age: (type int) initialized second member - age
 * @owner: (type char) initialized third member - owner
 * @a_idk
 *
 * Return: Nada!
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* dog.h */
