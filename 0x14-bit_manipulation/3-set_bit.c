#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @num: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	unsigned int k

	if (index > 63)
	       return (-1);

	k = 1 << index;
	*num = (*num | k);

	return (1);
}
