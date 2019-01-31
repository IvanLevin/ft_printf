

#include "includes/libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*arr_1;
	size_t			i;

	arr_1 = (unsigned char*)arr;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (arr_1[i] == c)
			return ((void *)&arr_1[i]);
		i++;
	}
	return (NULL);
}
