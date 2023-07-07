#include "main.h"

/**
 * print_binary - Used to print the binary equivalent of the(decimal number).
 * @n: The number that is printed in the binary.
 */
void print_binary(unsigned long int n)
{
	int t, count = 0;
	unsigned long int curt;

	for (t = 63; t >= 0; t--)
	{
		curt = n >> t;

		if (curt & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
