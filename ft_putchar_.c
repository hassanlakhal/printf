/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: number of characters printed
 */
#include "main.h"

int	_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
