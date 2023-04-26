#include "main.h"
/**
 * ft_memset - function that sets block of memory
 * @b: pointer to memory block
 * @c: integer value to set
 * @len: bytes input
 *
 * Return: void
 */
int *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *d;

	i = 0;
	d = (unsigned char *)b;

	while (i < len)
	{
		d[i++] = c;
	}
	return (d);
}
