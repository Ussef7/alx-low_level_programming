#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Used to be llocating 1024 bytes for a buffer.
 * @file: The name of the filebuffer storing chars for.
 *
 * Return: Pointer to the new buffer.
 */
char *create_buffer(char *file)
{
		char *buffer;

		buffer = malloc(sizeof(char) * 1024);
		if (buffer == NULL)
{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
			exit(99);
}
				return (buffer);
}
/**
 * close_file - Used to be closing file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
		int f;

		f = close(fd);
		if (f == -1)
{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
}
}
/**
 * main - Used to be coping the contents of a file to another.
 * @argc: Number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: (0) means success.
 *
 * Description: Exit code 97 : If the argument count is incorrect.
 *              Exit code 98 : If file_from does not exist or cannot be read.
 *              Exit code 99 : If file_to cannot be created or written to.
 *              Exit code 100 : If file_to or file_from cannot be closed.
 */
int main(int argc, char *argv[])
{
		int from, to, h, w;

		char *buffer;
		if (argc != 3)
{
			dprintf(STDERR_FILENO,
				       "Usage: cp file_from file_to\n");
		exit(97);
}
		buffer = create_buffer(argv[2]);
		from = open(argv[1], O_RDONLY);
		h = read(from, buffer, 1024);
		to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		do {
		if (from == -1 || h == -1)
{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
}
		w = write(to, buffer, h);
		if (to == -1 || w == -1)
{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
}
		h = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
} 		while (h > 0);
			free(buffer);
			close_file(from);
			close_file(to);
				return (0);
}
