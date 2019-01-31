
#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch_a;
	char	*arr;

	ch_a = (char)c;
	arr = (char *)s;
	while (*arr != '\0' && *arr != ch_a)
		arr++;
	if (*arr != ch_a)
		return (NULL);
	else
		return (arr);
}
