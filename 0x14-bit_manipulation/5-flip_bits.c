#include "main.h"

/**
 * flip_bits - Used the count the number of bits to be changed.
 * to get from number (1) to another one.
 * @n: The first Number.
 * @m: The second Number.
 *
 * Return: The number of bits to be changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h, count = 0;
	unsigned long int curt;
	unsigned long int excl = n ^ m;

	for (h = 63; h >= 0; h--)
	{
		curt = excl >> h;
		if (current & 1)
			count++;
	}
		return (count);
}
