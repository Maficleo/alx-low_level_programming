#include <stdio.h>
/**
 * main - main project
 * Description:all possible single digit number combination.
 * use 'putchar' to print console
 * using only 'putchar' four times at most
 * do not use any 'char' variable
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
