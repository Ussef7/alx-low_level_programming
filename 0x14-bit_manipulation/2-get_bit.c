#include "main.h"

/**
 * get_bit - Used to return the value of the bit at index in decimal number
 * @n: A number to be searched.
 * @index: A index of a bit.
 *
 * Return: The value of an bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int BIT_VALUE;

	if (index > 63)
		return (-1);

	BIT_VALUE = (n >> index) & 1;

	return (BIT_VALUE);
}
