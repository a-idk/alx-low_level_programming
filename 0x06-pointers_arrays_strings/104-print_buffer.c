/* include header files */
#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: buffer
 * @size: size
 * @a_idk
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int m = 0, j, i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	else
	{
		while (m < size)
		{
			j = size - m < 10 ? size - m : 10;
			printf("%08x: ", m);
			for (i = 0; i < 10; i++)
			{
				if (i < j)
					printf("%02x", *(b + m + i));
				else
					printf("  ");
				if (i % 2)
				{
					printf(" ");
				}
			}
			for (i = 0; i < j; i++)
			{
				int c = *(b + m + i);

				if (c < 32 || c > 132)
				{
					c = '.';
				}
				printf("%c", c);
			}
			printf("\n");
			m = m + 10;
		}
	}
}
