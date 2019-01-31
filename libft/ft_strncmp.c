

#include "includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	if ((unsigned char)s1[i] > 127 || (unsigned char)s2[i] > 127)
		return ((unsigned char)(s1[i] - s2[i]));
	return (s1[i] - s2[i]);
}
