/* include all header files */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: the fixed argument
 * @a_idk
 * Return: Nada!
 */
void print_all(const char * const format, ...)
{
	/* declaring and initializing variables */
	unsigned int count = 0, index1 = 0, index2;
	const char t_format[] = "cifs";
	char *s;
	va_list xlist;

	/* starting the iterative argument of va_list xlist */
	va_start(xlist, format);
	while (format && format[index1])
	{
		index2 = 0;
		while (t_format[index2])
		{
			if (format[index1] == t_format[index2] && count)
			{
				printf(", ");
				break;
			} index2++;
		}
		switch (format[index1])
		{
			case 'c':
				printf("%c", va_arg(xlist, int)), count = 1;
				break;
			case 'i':
				printf("%d", va_arg(xlist, int)), count = 1;
				break;
			case 'f':
				printf("%f", va_arg(xlist, double)), count = 1;
				break;
			case 's':
				s = va_arg(xlist, char *), count = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				} printf("%s", s);
				break;
		} index1++;
	} printf("\n"), va_end(xlist); /* free va_list xlist */
}
