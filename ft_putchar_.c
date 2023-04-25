/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 */
#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
