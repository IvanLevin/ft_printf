

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*arr;

	i = 0;
	if (s == NULL)
		return (0);
	arr = ft_strnew(len);
	if (arr == NULL)
		return (NULL);
	while (i < len)
	{
		arr[i] = s[start];
		i++;
		start++;
	}
	arr[i] = '\0';
	return (arr);
}
