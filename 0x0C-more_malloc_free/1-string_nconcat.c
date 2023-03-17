#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int s1num, s2num, sizeconcat, s;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1num = 0; s1[s1num]; s1num++)
		;
	for (s2num = 0; s2[s2num]; s2num++)
		;
	s2num > n ? (s2num = s) : (s = s2num);
	sizeconcat = s1num + s2num + 1;
	m = malloc(sizeconcat * sizeof(char));
	if (m == NULL)
		Return(NULL);
	for (s = 0; s < sizeconcat - 1; s++)
		s < s1num ? (m[s] = s1[s] : (m[s] = s2[s - s1num]);
				m[sizeconcat] = '\0';
				return (m);
