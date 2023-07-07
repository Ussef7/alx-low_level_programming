#include "main.h"

/**
 * get_endianness - Used to check if the machine is (SMALL) or (BIG) endian.
 * Return: 0 for (BIG), 1 for (SMALL)
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
