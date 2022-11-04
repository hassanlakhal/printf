/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 08:22:59 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/03 16:13:49 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
int	ft_put_hex(size_t nb ,char c)
{
	int len;
	len = 0;
	int j;
	j = 0;
	if (c == 'x')
		j = 87;
	else if(c == 'X')
		j = 55;
	if (nb >= 16)
	{
		ft_put_hex(nb / 16 , c);
		ft_put_hex(nb % 16 , c);
	}
	if (nb < 16)
		{
			if (nb >= 10)
			{
				ft_putchar(nb + j);
			}
			else
				ft_putchar(nb + 48);
		}
	return (len);
}

