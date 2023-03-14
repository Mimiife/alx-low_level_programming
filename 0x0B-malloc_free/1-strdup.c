#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - this code returns a pointer to newly
 * allocated space in memory
 * @str: string to copy
 * Return: pointer to array or null
 **/
char *_strdup(char *str)
{
	char *strDup;
	int i, l;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strDup = malloc(sizeof(*str) * i);
	if (strDup == NULL)
		return (NULL);
	l = 0;
	while (str[l] != '\0')
	{
		strDup[l] = str[l];
		l++;
	}
	return (strDup);
}
