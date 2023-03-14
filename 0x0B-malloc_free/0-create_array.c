#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 * Initializes it with a specific char
 *@size: size of array of char
 *@c: char to be initialized
 * Returns NULL if size = 0
 * Returns a pointer to the array, 
 * or Null if it fails
 */
char create_array(unsigned int size, char c)
{
	char *array;
	unsigned int j;

	if (signed int == 0)
		Return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL) 
		Return (NULL);

	for (j = 0, j < size, j++)
		array [j] = c;

	Return (array);
}
