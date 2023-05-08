#include "main.h"

/**
 * create_file -  Used to create an file.
 * @filename: A pointer to the name of the file that is going to be created.
 * @text_content: A pointer to a string.
 *
 * Return: Function fails means (-1).
 *         Success means (1).
 */
int create_file(const char *filename, char *text_content)
{
	int ig, v, sat = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (sat = 0; text_content[sat];)
			sat++;
	}

	ig = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	v = write(ig, text_content, sat);

	if (ig == -1 || v == -1)
		return (-1);

	close(ig);

	return (1);
}
