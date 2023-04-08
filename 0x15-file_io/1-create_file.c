#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content:The content of the pointer to a string to write to the file.
 * Description: Create a function that creates a file.
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, buffer = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (buffer = 0; text_content[buffer];)
			buffer++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, buffer);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

