#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @num: The number that the absolute value is needed.
 *
 * Return: positive (+ve) number.
 */
int _abs(int num)
{
	if (num == 0)
		return (num);
	if (num < 0)
		return (num * (-1));
	return (num);
}
