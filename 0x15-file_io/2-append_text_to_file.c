#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - that appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: content file
 * Description: function that appends text at the end of a file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, buffer = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (buffer = 0; text_content[buffer];)
			buffer++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, buffer);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
