#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: a pointer points the number given
 * @index: is the index starts at 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ashift;

	if (index > 63)
		return (-1);

	ashift = 1 << index;
	*n = (*n & (~ashift));

	return (1);
}
