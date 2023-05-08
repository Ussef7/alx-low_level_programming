#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Used to read the text of a file that is printed to (STDOUT).
 * @filename: The text of the file.
 * @letters: The number of letters readen.
 * Return: The actual number of bytes readen and printed means (v).
 *        "Function fails" or "Filename is NULL" means (0).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *sat;
	ssize_t ig;
	ssize_t v;
	ssize_t h;

	ig = open(filename, O_RDONLY);
	if (ig == -1)
		return (0);
	sat = malloc(sizeof(char) * letters);
	h = read(ig, sat, letters);
	v = write(STDOUT_FILENO, sat, h);

	free(sat);
	close(ig);
	return (v);
}
