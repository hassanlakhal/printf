
#ifndef MAIN_H
# define MAIN_H
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int		_putchar(char c);
int		ft_putstr(char *s);
int	_printf(const char *str, ...);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_itoa(int n);
int	ft_putnbr(int nb);
#endif
