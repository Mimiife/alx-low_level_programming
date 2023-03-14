#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **twoangle;
	int hgt_a, wid_b;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoangle = malloc(sizeof(int *) * height);

	if (twoangle == NULL)
		return (NULL);

	for (hgt_a = 0; hgt_a < height; hgt_a++)
	{
		twoD[hgt_a] = malloc(sizeof(int) * width);

		if (twoangle[hgt_a] == NULL)
		{
			for (; hgt_a >= 0; hgt_a--)
				free(twoangle[hgt_a]);

			free(twoangle);
			return (NULL);
		}
	}

	for (hgt_a = 0; hgt_a < height; hgt_a++)
	{
		for (wid_b = 0; wid_b < width; wid_b++)
			twoangle[hgt_a][wid_b] = 0;
	}

	return (twoangle);
}
