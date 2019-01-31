

#include "includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char*)s;
	while (i < n)
	{
		arr[i] = 0;
		i++;
	}
}
