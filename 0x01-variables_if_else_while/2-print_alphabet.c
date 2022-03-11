#include <stdio.h>
/**
 * main - Entry point
 * Description: print all small letters
 * Return 0 (Success)
*/

int main(void)
{
	int alpha;
	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		putchar("%c"alpha);
	}
	return (0);

}
