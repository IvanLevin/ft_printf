

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*arr;
	unsigned int	len;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = 0;
	i = 0;
	len = ft_strlen(s);
	arr = ft_strnew(len);
	if (arr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		arr[i] = f(i, s[i]);
		i++;
	}
	return (arr);
}
