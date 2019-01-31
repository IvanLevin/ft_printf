

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;
	size_t			i;

	i = 0;
	arr1 = (unsigned char *)src;
	arr2 = (unsigned char *)dst;
	if (src > dst)
		while (i < n)
		{
			arr2[i] = arr1[i];
			i++;
		}
	if (dst > src)
		while (n)
		{
			n--;
			arr2[n] = arr1[n];
		}
	return (arr2);
}
