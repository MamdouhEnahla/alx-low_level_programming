#include "main.h"

/**
 * copy_content - Check code
 * @file_from: argv[1] source file name
 * @file_to: argv[2] destination file name
 */
void copy_content(const char *file_from, const char *file_to)
{
	int f_from, f_to, c_from, c_to, br;
	char buff[1024];

	f_from = open(file_from, O_RDONLY);
	f_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		close(f_from);
		exit(99);
	}
	while ((br = read(f_from, buff, sizeof(buff))) > 0)
	{
		if (write(f_to, buff, br) != br)
		{
			fprintf(stderr, "Error: Can't write to %s\n", file_to);
			close(f_from);
			exit(99);
		}
	}

	c_from = close(f_from);
	c_to = close(f_to);
	if ((c_from == -1) || (c_to == -1))
	{
		fprintf(stderr, "Error: Can't close fd %d\n",
				(c_from == -1) ? c_from : c_to);
		exit(100);
	}
}

/**
 * main - Entry Point
 * @argc: count of argv
 * @argv: array of argv
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if ((access(argv[1], F_OK | R_OK)) != 0)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	copy_content(argv[1], argv[2]);
	return (0);
}
