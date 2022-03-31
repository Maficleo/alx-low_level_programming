#include "main.h"

/**
 * _print_rev_recursion - printing strings in reverse.
 * @s: inout string
 */

void _print_rev_recursion(char *s)

{
	if (*s)

	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
