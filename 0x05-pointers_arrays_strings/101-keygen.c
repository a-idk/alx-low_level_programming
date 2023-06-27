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
	int pswd[150], count, sum = 0, final;

	srand(time(NULL));

	for ( ; count < 100; count++)
	{
		pswd[count] = rand() % 80;
		sum = sum + (pswd[count] + '0');
		putchar(pswd[count] + '0');

		if (((3500 - sum) - '0') < 80)
		{
			final = 3500 - sum - '0';
			sum = sum + final;
			putchar(final + '0');
			break;
		}
	}
	return (0);
}
