#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - My Program
 *
 * Description: Display random number and last diigt
 * check the conditions below
 * 1stdgt>5, lstdgt = 0 or (1stdgt<5 and != 0)
 * Return: If correct, it returns 0
 */
int main(void)
{
	int n;
	int lstdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdgt = n % 10;
	if (lstdgt > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lstdgt);
	else if (lstdgt == 0)
		printf("Last digit of %i is %i and is 0\n", n, lstdgt);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lstdgt);

	return (0);
}

