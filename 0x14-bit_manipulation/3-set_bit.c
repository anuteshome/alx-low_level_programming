#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the given number
 * @index: is the index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ashift;

	if (index > 63)
		return (-1);

	ashift = 1 << index;
	*n = (*n | ashift);
	return (1);
}
