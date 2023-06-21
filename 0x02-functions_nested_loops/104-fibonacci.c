#include "main.h"
#include <stdio.h>

/**
 * main - function that finds and prints the first 98 fibonacci numbers
 *
 * written by @a_idk
 * Return: Always 0 (Success!)
 */
int main(void)
{
	int tally, l = 1000000000;
	int d = l - 1;
	unsigned long int prev = 0, prev_a, prev_b,  next = 1;
	unsigned long int next_a, next_b, sum = 0, a, b, new;

	/* Begin for loop */
	for (tally = 0; tally < 92; tally++)
	{
		new = prev + next;
		printf("%lu, ", new);
		prev = next;
		next = new;
	}
	prev_a = prev / l;
	next_a = next / l;
	prev_b = prev % l;
	next_b = next % l;
	for (tally = 93; tally < 99; tally++)
	{
		a = prev_a + next_a;
		b = prev_b + next_b;
		if ((prev_b + next_b) > d)
		{
			a += 1;
			b %= l;
		}
		printf("%lu%lu", a, b);
		if (tally != 98)
		{
			printf(", ");
		}
		prev_a = next_a;
		prev_b = next_b;
		next_a = a;
		next_b = b;
	}
	printf("\n");
	return (0);
}
