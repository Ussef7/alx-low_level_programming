#include "main.h"

/**
 * append_text_to_file - Used to append an  text at the end of the file.
 * @filename: Pointes to the name of file.
 * @text_content: A string to be added to the end of file.
 *
 * Return: "Function fails" or "Filename is NULL" means  (-1).
 *         "File doesn't exist" | "User lacks write permissions" means  (-1).
 *         Success means (1).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int t, v, sat = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (sat = 0; text_content[sat];)
			sat++;
	}

	t = open(filename, O_WRONLY | O_APPEND);
	v = write(t, text_content, sat);

	if (t == -1 || v == -1)
		return (-1);

	close(t);

	return (1);
}
