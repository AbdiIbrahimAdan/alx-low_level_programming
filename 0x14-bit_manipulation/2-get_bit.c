#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @num: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int num, unsigned int index)
{
	unsigned int i;

	if (num == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; num >>= 1, i++)
	{
		if (index == i)
		{
			return (num & 1);
		}
	}

	return (-1);
}
