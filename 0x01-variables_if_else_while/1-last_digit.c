#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/*
 * main - Entry point
 * Description: prints if the string is greater than 5 or less than 6 
 * or equal to zero
 *Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit;
	last_digit = n[-1];
	if ( last_digit > 5 )
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	} else if ( last_digit == 0 )
	{
		printf("Last digit of %d is %d and is o\n", n, last_digit);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",n, last_digit);
	}
	return (0);
}