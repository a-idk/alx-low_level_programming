/* Include the header files */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function that generates random valid passwords for the
 * program 101-crackme
 * @a_idk
 * Return: Always 0 (Success!)
 */


int main(void)
{
	int sum = 0, pass[100], count, final;

	srand(time(NULL));

	for ( ; count < 100; count++)
	{
		pass[count] = rand() % 75;
		sum = sum + (pass[count] + '0');
		putchar(pass[count] + '0');

		if ((2772 - sum) - '0' < 75)
		{
			final = 2772 - sum - '0';
			sum = sum +  final;
			putchar(final + '0');
			break;
		}
	}

	return (0);
}
