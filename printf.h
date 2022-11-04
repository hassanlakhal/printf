/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:53:41 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/04 02:29:25 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

int		ft_putnbr(int nb);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_put_hex(size_t nb, char c);
char	*ft_uitoa(unsigned int n);
int	ft_putnbr_u(unsigned int nb);
int	ft_printf(const char *str, ...);
#endif
