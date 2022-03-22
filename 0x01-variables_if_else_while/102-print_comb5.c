#include <stdio.h>
/**
 * main - main project
 * Description: print double of doubles.
 * numbers should be seperated by space
 * all numbers must be two digits 1 should be 01
 * seperate combination with comma then space
 * print in accending order
 * all three digits are considered same no matter the order
 * use 'putchar' only
 * do not use any 'char' variable.
 * Return: 0 for positive result
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* doubles fnum */
		b = i % 10; /* singles fnum */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* doubles snum */
			d = j % 10; /* singles snum */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
