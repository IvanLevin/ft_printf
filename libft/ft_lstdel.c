

#include "includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (alst == NULL || *alst == NULL || del == NULL)
		return ;
	tmp = *alst;
	while ((*alst) != NULL)
	{
		tmp = (*alst)->next;
		(del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		(*alst) = NULL;
		(*alst) = tmp;
	}
}
