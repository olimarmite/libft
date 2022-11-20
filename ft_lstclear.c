#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL || *lst == NULL)
		return (NULL);
	while ((*lst)->next != NULL)
	{
		lst = (*lst)->next;
	}
	return (lst);
}