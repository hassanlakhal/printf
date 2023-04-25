
#include "main.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)b;
	while (i < len)
	{
		d[i++] = c;
	}
	return (d);
}
