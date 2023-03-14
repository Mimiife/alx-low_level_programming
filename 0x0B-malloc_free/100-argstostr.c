#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguements to the program
 * @ac: arguement count
 * @av: pointer to arguements
 * Return: pointer to new space in memory or null
 */
char *argstostr(int ac, char **av)
{
	char *strConcat;
	int a, b, c, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
/* count the number of chars in each string */
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			size++;
		size++;
	}
	size++;
/* allocate memory for total number of chars and
 * new line for each word
 */
	strConcat = malloc(sizeof(char) * size);
	if (strConcat == NULL)
		return (NULL);
	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			strConcat[c++] = av[a][b];
		}
		strConcat[c++] = '\n';
	}
	strConcat[c] = '\0';
	return (strConcat);
}
