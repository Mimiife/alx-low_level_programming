#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * calloc - Allocate memory to an array
 * @nmemb: elements of the array
 * @size: size of the array
 *
 * Return: NULLsize or nmemb == 0
 * NUll if malloc is not successful
 * pointer to the memory, if succesful
 */
void *_calloc(unsigned int nmemb, unsigned int size);
{
	void *p;
	unsigned int data;
	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (data = 0; data < (nmemb * size); data++) 
	{
			*((char *) (p) + data) = 0;
	}
	return (p);
}
