/* Title: 100-get_endianness.c */
/* include header file */
#include "main.h"

/* second chance */
/**
 * get_endianness - function that checks the endianness
 * @a_idk
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	/* declaring and assigning variables */
	char *ch;
	unsigned int k = 1;

	ch = (char *) &k;
	return (*ch);
}
