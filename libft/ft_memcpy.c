
#include "includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*arr;
	unsigned char	*arr_1;
	size_t			i;

	i = 0;
	arr = (unsigned char*)dest;
	arr_1 = (unsigned char*)src;
	while (i < n)
	{
		arr[i] = arr_1[i];
		i++;
	}
	return (arr);
}
