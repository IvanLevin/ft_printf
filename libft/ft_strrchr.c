
#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*arr;
	char	*check;

	check = NULL;
	ch = (char)c;
	arr = (char *)s;
	while (*arr != '\0')
	{
		if (*arr == ch)
			check = arr;
		arr++;
	}
	if (*arr == ch)
		return (arr);
	else
		return (check);
}
