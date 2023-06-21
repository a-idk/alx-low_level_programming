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
	unsigned long int a, prev = 1, prev1, prev11,  next = 2;
	unsigned long int next1, next11, sum = 0;
	int a;
	unsigned long int b = 1;
	unsigned long int c = 2;
	unsigned long int new;

	/* Begin for loop */

	unsigned long int i;
		unsigned long int bef = 1;
		unsigned long int aft = 2;
		unsigned long int l = 1000000000;
		unsigned long int bef1;
		unsigned long int bef2;
		unsigned long int aft1;
		unsigned long int aft2;


		printf("%lu", bef);


		for (i = 1; i < 91; i++)
		{
			printf(", %lu", aft);
			aft += bef;
			bef = aft - bef;
		}


		bef1 = (bef / l);
		bef2 = (bef % l);
		aft1 = (aft / l);
		aft2 = (aft % l);


		for (i = 92; i < 99; ++i)
		{
			printf(", %lu", aft1 + (aft2 / l));
			printf("%lu", aft2 % l);
			aft1 = aft1 + bef1;
			bef1 = aft1 - bef1;
			aft2 = aft2 + bef2;
			bef2 = aft2 - bef2;
		}
		printf("\n");
		return (0);
	}

	for (a = 1; a <= 33; ++a)
	{
		if (((b % 2) == 0) && (b < 4000000))
		{
			sum = sum + b;
		}
		new = b + c;
		b = c;
		c = new;
	}
	printf("%lu\n", sum);
	return (0);
}
