

#include "includes/libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char*)memptr;
	while (i < num)
		arr[i++] = val;
	return (arr);
}
