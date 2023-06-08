#include "main.h"

/**
 * get_bit - The value of a bit at an index in a decimal number is returned.
 * @n:This denotes number to search
 * @index: This is the index of the bit
 *
 * Return: Value of the bit is returned.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
