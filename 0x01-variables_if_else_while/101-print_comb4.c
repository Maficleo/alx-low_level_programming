#include <stdio.h>
/**
 * main - main project
 * Description: Print all possible different comb of 3 digits.
 * Numbers must be seperated by commas and a space
 * The 3 digits must all be different
 * all combinations of 012 are considered as same.
 * print out only smallest combo
 * print all numbers in ascending order
 * only use 'putchar' to print and 6 times at most.
 * do not use any 'char' variables.
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* singles */

		if (j < k && k < 1)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
