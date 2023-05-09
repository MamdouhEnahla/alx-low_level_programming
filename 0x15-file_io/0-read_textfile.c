#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 * @filename: first arg
 * @letters: second arg
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	n_bytes = read(fd, &buff[0], letters);
	n_bytes = write(STDOUT_FILENO, &buff[0], n_bytes);
	close(fd);

	return (n_bytes);
}
