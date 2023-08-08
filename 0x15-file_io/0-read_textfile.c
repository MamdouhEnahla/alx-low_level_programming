#include "main.h"

/**
 * read_textfile - Check code 
 * @filename: name of file
 * @letters: number of bytes
 *
 * Return: number bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = read(f, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(f);
	return (b);
}
