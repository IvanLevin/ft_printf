
#include "includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*arr;
	unsigned char	*arr_1;
	size_t			i;

	i = -1;
	c = (unsigned char)c;
	arr = (unsigned char*)src;
	arr_1 = (unsigned char*)dst;
	while (++i < n)
		if ((arr_1[i] = arr[i]) == c)
			return (&arr_1[i + 1]);
	return (NULL);
}
