
#include "main.h"

int	ft_putnbr(int nb)
{
	char	*tab;
	int		len;

	tab = ft_itoa(nb);
	len = ft_putstr(tab);
	free(tab);
	return (len);
}
