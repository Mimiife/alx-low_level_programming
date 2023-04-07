[200~#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  * append_text_to_file - Appends text at the end of a file.
 *   * @filename: A pointer to the name of the file.
 *    * @text_content: The string to add to the end of the file.
 *     * Description: function that appends text at the end of a file
 *      * Return: 1 on success, -1 on failure
 *       */

int append_text_to_file(const char *filename, char *text_content)

{
	int x = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[x] != '\0')
	{
		x++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, x);

	return (1);
}
