

#include "includes/libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	size_t check_one;
	size_t check_two;

	check_one = 0;
	check_two = 0;
	i = 0;
	if (n == 0)
		return (1);
	if (!s2 || !s1)
		return (0);
	check_one = ft_strlen(s1);
	check_two = ft_strlen(s2);
	if (check_one != check_two)
		return (0);
	while ((*s1 && *s2) && n > 0)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (1);
}
