#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main -  Copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* create_buffer - Allocates 1024 bytes for a buffer.
* @file: The name of the file buffer is storing chars for.
* Return: 0
*/

int main(int argc, char *argv[])
{
int file_from, file_to;
int no1 = 1024, no2 = 0;
char buffer[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (file_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file_from), exit(99);
}
while (no1 == 1024)
{
	no1 = read(file_from, buffer, 1024);
	if (no1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	no2 = write(file_to, buf, no1);
	if (no2 < no1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(file_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

if (close(file_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

return (0);
}
