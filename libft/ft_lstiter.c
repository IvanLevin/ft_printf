

#include "includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst == NULL || f == NULL)
		return ;
	f(lst);
	while (lst->next)
	{
		lst = lst->next;
		f(lst);
	}
}
