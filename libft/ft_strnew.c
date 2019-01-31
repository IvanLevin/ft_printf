

#include "includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*arr;
	size_t	i;

	i = 0;
	arr = (void *)malloc(size + 1);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = '\0';
		i++;
	}
	arr[i] = '\0';
	return ((char *)arr);
}
