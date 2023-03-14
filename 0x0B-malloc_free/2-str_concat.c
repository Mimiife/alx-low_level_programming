#include <stdio.h>
#include <stdlib.h>
#include "main.h"

 /**
 * str_concat - Concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int a, concat_a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] || s2[a]; a++)
		b++;

	concat_str = malloc(sizeof(char) * b);

	if (concat_str == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		concat_str[concat_a++] = s1[a];

	for (a = 0; s2[a]; a++)
		concat_str[concat_a++] = s2[a];

	return (concat_str);
}
