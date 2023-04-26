#include "main.h"

/**
 * ft_putnbr - function that outputs an integer
 * @nb: the integer to be output to the console
 *
 * Return: the number of characters written to the console
 */

int ft_putnbr(int nb)
{
	char *tab;
	int len;

	tab = ft_itoa(nb);
	len = ft_putstr(tab);
	free(tab);

	return (len);
}
