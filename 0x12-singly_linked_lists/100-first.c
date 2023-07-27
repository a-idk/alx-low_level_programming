/* Title: 100-first.c */
/* include header file */
#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - function that prints a sentence before the main
 * @a_idk
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
