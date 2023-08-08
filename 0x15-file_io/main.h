#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define READ_BUF_SIZE 1024

/**
 * _strlen - Check code
 * @s: function arg
 *
 * Return: integer value
 */
int _strlen(char *s)
{
	int ptr = 0;

	if (*s)
		ptr += _strlen(s + 1) + 1;

	return (ptr);
}

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
