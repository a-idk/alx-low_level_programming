#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct prints - defining a new struct type prints
 * @symb: symbol representing the data type
 * @print: pointer to a function that prints data type according to the symbol
 * @a_idk
 */

typedef struct prints
{
	char *symb;
	void(*print)(va_list x);
} prints_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* variadic_functions.h */
