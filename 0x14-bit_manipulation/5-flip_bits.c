#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* flip_bits - function that returns the number of bits you would need to flip
* @n: integer
* @m: integer
* Return: the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, num = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			num++;
	}

	return (num);
}
