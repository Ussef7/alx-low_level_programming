#include "main.h"

/**
 * binary_to_uint - Used to convert binary number to the unsigned int.
 * @b: A string that containes  the binary number.
 *
 * Return: The number that is converted
 */
unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int De_valu = 0;

	if (!b)
		return (0);

	for (v = 0; b[v]; v++)
	{
		if (b[v] < '0' || b[v] > '1')
			return (0);
		De_valu = 2 * De_valu + (b[v] - '0');
	}

	return (De_valu);
}

