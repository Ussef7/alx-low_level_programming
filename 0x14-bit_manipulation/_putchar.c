#include "main.h"
#include <unistd.h>
/**
 * _putchar - Used to be writing the character (c), to the stdout.
 * @c: A Character to be printed.
 *
 * Return: 'Success' (1)
 * On error,Returned (-1), error is appropriately seted.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
