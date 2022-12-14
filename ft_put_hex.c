/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 08:22:59 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/04 21:04:43 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static int	count_hex(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}
int	ft_put_hex(long nb, char c)
{
	int		len;
	int		j;
	unsigned long long i;
	i = 0;
	if(nb > LONG_MAX)
		i = (unsigned int)nb;
	else
		i = nb;
	len = 0;
	len = count_hex(i);
	j = 0;
	if (c == 'x')
		j = 87;
	else if (c == 'X')
		j = 55;
	if (nb >= 16)
	{
		ft_put_hex(i / 16, c);
		ft_put_hex(i % 16, c);
	}
	if (i < 16)
	{
		if (i >= 10)
		{
			ft_putchar(i + j);
		}
		else
			ft_putchar(i + 48);
	}
	return (len);
}
