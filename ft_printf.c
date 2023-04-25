
#include "ft_printf.h"

/**
 * _print - helper function that prints the next argument based on format specifier
 * @s: format string
 * @i: index of current character in format string
 * @n: variable arguments list
 *
 * Return: number of characters printed
 */

static int	_print(const char *s, int i, va_list n)
{
	if (s[i + 1] == '%')
		return (ft_putchar(s[i + 1]));
	else if (s[i + 1] == 'c')
		return (ft_putchar(va_arg(n, int)));
	else if (s[i + 1] == 's')
		return (ft_putstr(va_arg(n, char *)));
	else
		return (ft_putchar(s[i + 1]));
}

/**
 * _printf - implementation of printf function which formats and prints output
 * @str: format string
 * @...: variable arguments list
 *
 * Return: number of characters printed
 */

int	_printf(const char *str, ...)
{
	va_list	n;
	int		i;
	int		ret;

	va_start(n, str);
	i = 0;
	ret = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ret += _print(str, i, n);
			i++;
		}
		else
			ret += _putchar(str[i]);
		i++;
	}
	va_end(n);
	return (ret);
}
