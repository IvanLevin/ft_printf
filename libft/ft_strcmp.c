

#include "includes/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while ((*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
	}
	if ((unsigned char)*s1 > 127 || (unsigned char)*s2 > 127)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
