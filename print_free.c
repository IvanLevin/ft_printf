
#include "ft_printf.h"

void	ft_print_free(char **str, t_lists *list, long long max)
{
	int		i;
    char    *tmp;
	i = 0;

	if (!str)
		return;
	tmp = *str;
	while (max)
	{
		write(1, tmp++, 1);
		max--;
		i++;
	}
	free(*str);
	*str = NULL;
	list->len += i;
}

void	ft_print_free2(char *str, t_lists *list, long long max)
{
    int		i;

    i = 0;
    if (!str)
        return;
    while (max)
    {
        write(1, str++, 1);
        max--;
        i++;
    }
    list->len += i;
}
