#include <stdio.h>
/**
 * main - main project
 * Description: using 'putchar' for lower and uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
