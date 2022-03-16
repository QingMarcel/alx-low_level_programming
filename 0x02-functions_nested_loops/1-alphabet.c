#include "main.h"

/**
 * print: print alphabet in lowercase
 *
 * Return: void
 */

void print_lowercase(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
