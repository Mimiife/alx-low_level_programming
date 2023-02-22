#include "main.h"

/**
 * _isalpha - checks for alphabetic character, uppercase or lowercase..
 * @c: The character to check and verify if it is an alphabet.
 *
 * Return: 1 if c is a letter, else 0.
 */
int _isalpha(int c)
{
	char lchar, uchar;

	for (lchar = 'a'; lchar <= 'z'; lchar++)
	{
		if (c == lchar)
			return (1);
	}
	for (uchar = 'A'; uchar <= 'Z'; uchar++)
	{
		if (c == uchar)
			return (1);
	}
	return (0);

