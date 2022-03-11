#include <stdio.h>
/**
 * main - Entry point
 * Description: print all small letters
 * Return 0 (Success)
*/

int main(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		putchar(alpha);
	}
	return (0);

}
