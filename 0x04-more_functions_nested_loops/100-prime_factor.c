#include <math.h>
#include <stdio.h>

/**
 * main - function that finds & prints the largest prime factor of 612852475143
 * @a_idk
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int num, c, prime_max;

	num = 612852475143;
	prime_max = -1;

	while (num % 2 == 0)
	{
		prime_max = 2;
		num = num / 2;
	}
	for (c = 3; c <= sqrt(num); c += 2)
	{
		while (num % c == 0)
		{
			prime_max = c;
			num /= c;
		}
	}
	if (num > 2)
	{
		prime_max = num;
	}
	printf("%ld\n", prime_max);
	return (0);
}
