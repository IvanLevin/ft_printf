

#include "includes/libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*arr;

	i = 0;
	arr = (void *)malloc(size);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, size);
	return (arr);
}
