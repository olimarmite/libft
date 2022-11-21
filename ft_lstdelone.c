/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivier <olimarti@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:04:28 by olivier           #+#    #+#             */
/*   Updated: 2022/11/20 15:37:13 by olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp_next;

	if (lst == NULL)
		return ;
	tmp_next = lst->next;
	del(lst->content);
	if (tmp_next == NULL)
	{
		free(lst);
	}
	else
	{
		*lst = *tmp_next;
		free(tmp_next);
	}
}

// int	main(void)
// {
// 	t_list *lst = ft_lstnew("h");
// 	ft_lstadd_front(&lst, ft_lstnew("e"));
// 	ft_lstadd_front(&lst, ft_lstnew("y"));
// 	ft_lstadd_back(&lst, ft_lstnew("!"));
// 	printf("%d\n", ft_lstsize(lst));
// 	printf("%s\n", (char *)ft_lstlast(lst)->content);
// 	ft_lstdelone(lst, free);
// 	while (lst)
// 	{
// 		printf("[%s]\n", (char *)(lst->content));
// 		lst = lst->next;
// 	}
// }