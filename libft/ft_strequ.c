

#include "includes/libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	while ((*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
	}
	if ((*s1 - *s2) == 0)
		return (1);
	else
		return (0);
}
