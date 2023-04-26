#include "main.h"

/**
 * ft_putstr - writes a null-terminated string to the standard output stream
 *
 * @s: pointer to the string to be written
 *
 * Return: number of characters written to the output stream
 */

int ft_putstr(char *s)
{
	int i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
