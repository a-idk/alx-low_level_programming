#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program to printout last digit
 *
 * Return: Always 0 (Success!)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my main code */
	int lst_digit = n % 10;

	if (lst_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_digit);
	}
	else if (lst_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_digit);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n",	n, lst_digit);
	}
	return (0);
}
