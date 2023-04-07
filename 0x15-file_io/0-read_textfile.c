#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 * @filename: text file to be read pointer
 * @letters: number of letters to be read
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tap;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	tap = malloc(sizeof(char) * letters);
	t = read(fd, tap, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(tap);
	close(fd);
	return (w);
}
