/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olimarti <olimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:23:41 by olimarti          #+#    #+#             */
/*   Updated: 2022/11/13 19:45:17 by olimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*src;
	char	*result;

	src = (char *)s;
	result = 0;
	while (*src != 0)
	{
		if (*src == c)
			result = src;
		src++;
	}
	if (*src == c)
	{
		result = src;
	}
	return (result);
}
