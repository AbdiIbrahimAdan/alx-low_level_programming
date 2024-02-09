#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @num: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;

	if (*num & k)
		*num ^= k;

	return (1);
}
