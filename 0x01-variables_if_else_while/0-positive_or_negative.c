#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - new program
 *
 * Description: Display the value of randomly generated numbers.
 * if n>0, n=0 or n<0 displays their value.
 * Return: If correct, it return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}

