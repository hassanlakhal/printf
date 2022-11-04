/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:30:00 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/04 04:08:11 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
static int	ft_print(const char *s, int i, va_list n)
{
	if (s[i + 1] == '%')
		return (ft_putchar(s[i + 1]));
	else if (s[i + 1] == 'c')
		return (ft_putchar(va_arg(n, int)));
	else if (s[i + 1] == 's')
		return (ft_putstr(va_arg(n, char *)));
	else if (s[i + 1] == 'd' || s[i + 1] == 'i')
		return (ft_putnbr(va_arg(n, int)));
	else if (s[i + 1] == 'x' || s[i + 1] == 'X')
		return (ft_put_hex(va_arg(n, size_t), s[i + 1]));
	else if (s[i + 1] == 'u')
		return (ft_putnbr_u(va_arg(n, unsigned int)));
	else if (s[i + 1] == 'p')
		return (ft_putstr("0x") + ft_put_hex(va_arg(n, unsigned long long),
				'x'));
	else
		return (0);
}
int	ft_printf(const char *str, ...)
{
	va_list	n;
	int		i;
	int		ret;

	va_start(n, str);
	i = 0;
	ret = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("dscxuiXp%", str[i + 1]))
		{
			ret += ft_print(str, i, n);
			i++;
		}
		else
			ret += ft_putchar(str[i]);
		i++;
	}
	va_end(n);
	return (ret);
}

