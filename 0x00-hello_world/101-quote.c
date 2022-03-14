#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - my main program
 *
 * Description: Print to stdout and stderr without puts of printf
 * Return: If all is ok, it returns 1
 */
int main(void)
{
char strng[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int nbytes = strlen(strng);
write(2, strng, nbytes);
return (1);
}

