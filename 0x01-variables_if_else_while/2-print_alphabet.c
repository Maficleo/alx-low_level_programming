#include <stdio.h>
/**
 * main - main program
 * Description: use 'putchar' to print lower case alphabets.
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
	putchar('\n');

	return (0);
}
