#include "main.h"

/**
 * clear_bit - Used to set the value of a given bit to (0).
 * @n: Pointes to the number change
 * @index: The index of the bit (clear).
 *
 * Return: 1 means (success), -1 means (failure).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
