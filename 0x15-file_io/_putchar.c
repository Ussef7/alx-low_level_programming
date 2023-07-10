#include "main.h"
#include <unistd.h>


/**
 * _putchar - Used to write the character (c) to stdout.
 * @c: The character to be printed.
 *
 * Return: (1) means success.
 * On error, (-1) is returned, Errno is set appropriately.
 */

int _putchar(char c)
{       
	return (write(1, &c, 1));
}
