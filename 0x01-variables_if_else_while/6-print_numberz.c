#include <stdio.h>
/**
 * main - main project
 * Description: Print all numbers base '10' from '0'.
 * do not use any variable of type char
 * use 'putcha' to print console and use only twice
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
