#include "main.h"

/**
 * set_bit - Used to sett value of an bit at a given index to (1).
 * @n: Pointes to the number change.
 * @index: The index of an bit set to (1).
 *
 * Return: 1 means (success), -1 means (failure).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int q;

	if (index > 63)
		return (-1);

	q = 1 << index;
	*n = (*n | q);
	return (1);
}
