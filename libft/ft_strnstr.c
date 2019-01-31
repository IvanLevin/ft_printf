

#include "includes/libft.h"

static	int	ft_search(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (*big == '\0')
		return (NULL);
	if (*little == '\0')
		return ((char *)&big[i]);
	while (little[k])
		k++;
	if (k > len)
		return (NULL);
	k--;
	while ((i < len - k) && *big)
	{
		if (*big == *little)
			if (ft_search(big, little) == 1)
				return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
