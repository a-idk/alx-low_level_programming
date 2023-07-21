/* include all header files */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/* declaring functions */
void print_char(va_list n);
void print_nums(va_list ar_c);
void print_flt(va_list ar_c);
void print_str(va_list ar_c);
void print_all(const char * const format, ...);

/**
 * print_x - function that prints a character
 * @n: argument list pointing to the character to be printed.
 * @a_idk
 *
 * Return: Nada!
 */

void print_char(va_list n)
{
	/* declaring variable */
	char c;

	c = va_arg(n, int); /* retrieving argument */
	printf("%c", c); /* print char */
}

/**
 * print_nums - function that prints an int/num
 * @ar_c: list of arguments pointing to the integer
 *@a_idk
 *
 * Return: Nada!
 */

void print_nums(va_list ar_c)
{
	/* declaring variable */
	int n;

	n = va_arg(ar_c, int); /* retrieving argument */
	printf("%d", n); /* print integer */
}

/**
 * print_flt - function that prints a float
 * @ar_c: list of arguments pointing to the float
 * @a_idk
 *
 * Return: Nada!
 */

void print_flt(va_list ar_c)
{
	/* declaring variable */
	float f;

	f = va_arg(ar_c, double); /* retrieving argument */
	printf("%f", f); /* prints float */
}

/**
 * print_str - fuction that prints string
 * @ar_c: list of arguments pointing to the string
 * @a_idk
 *
 * Return: Nada!
 */

void print_str(va_list ar_c)
{
	/* variable declaration */
	char *str;

	str = va_arg(ar_c, char *); /* retrieving argument */
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: the fixed argument
 * @a_idk
 *
 * Return: Nada!
 */

void print_all(const char * const format, ...)
{
	/* variables declaration and initialization */
	int index1 = 0;
	int index2 = 0;
	prints_t opers[] = {
		{"c", print_char},
		{"i", print_nums},
		{"f", print_flt},
		{"s", print_str}
	};
	va_list x;
	char *separator = "";

	/* starting the iterating arguments of va_list x */
	va_start(x, format);

	while (format && (*(format + index1)))
	{
		while ((index2 < 4) && (*(format + index1) != *(opers[index2].symb)))
		{
			index2++;
		}
		if (index2 < 4)
		{
			printf("%s", separator);
			opers[index2].print(x);
			separator = ", ";
		}
		index1 += 1;
	}
	printf("\n");
	va_end(x); /* freeing the va_list x */
}
