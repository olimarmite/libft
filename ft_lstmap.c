/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olimarti <olimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:13:49 by olimarti          #+#    #+#             */
/*   Updated: 2022/11/21 15:42:17 by olimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*node_dup;

	dest = NULL;
	if (f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		node_dup = ft_lstnew(lst->content);
		if (!node_dup)
		{
			ft_lstclear(&dest, del);
			return (NULL);
		}
		ft_lstadd_back(&dest, node_dup);
		node_dup->content = f(lst->content);
		lst = lst->next;
	}
	return (dest);
}

// void	*addOne(void *nb)
// {
// 	char *tmp = ft_strdup((char *)nb);

// 	return (nb);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*dest;

// 	lst = ft_lstnew(ft_strdup("a"));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("b")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("c")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("d")));
// 	dest = ft_lstmap(lst, addOne, free);
// 	printf("%s\n", (char *)ft_lstlast(lst)->content);
// 	//ft_lstdelone(lst, free);
// 	while (lst)
// 	{
// 		printf("[%s]\n", (char *)(lst->content));
// 		lst = lst->next;
// 	}
// 	while (dest)
// 	{
// 		printf("[%s]\n", (char *)(dest->content));
// 		dest = dest->next;
// 	}
// }
