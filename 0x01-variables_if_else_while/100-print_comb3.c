#include <stdio.h>
/**
 * main - main project
 * Description: Print all possible combination of two digits.
 * Numbers must be seperated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * print only the smallest combination
 * numbersmust be executed in ascending order
 * use 'putchar' only
 * use 'putchar' 5 times only
 * do not use any 'char' variable.
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /* singles digit */
		k = i / 10; /* doubles digit */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
