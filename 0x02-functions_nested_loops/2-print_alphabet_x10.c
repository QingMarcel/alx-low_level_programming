#include "main.h"

/**
 * print_alphabet 10 times
 *
 * Description: print alpahbet 10 times
 * Return: Always(0)
 */

void print_alphabet_10times(void)
{
	int alpha_count = 0;

	while (alpha_count < 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		alpha_count++;
		_putchar('\n');
	}
}
