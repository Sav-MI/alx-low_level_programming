#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int oo = 0;
	char c;

	if (b == NULL)
		return (0);

	while ((c = b[oo++]))
		{
		if (c != '1' && c != '0')
			return (0);
		num = (num << 1) | (c & 0xf);
		}

	return (num);
}
