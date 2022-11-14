/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olimarti <olimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:11:04 by olimarti          #+#    #+#             */
/*   Updated: 2022/11/14 23:51:09 by olimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	result;

	i = 0;
	while (dst[i] && (i <= size))
	{
		i++;
	}
	//dst[i] = 0;
	result = (i + ft_strlcpy(dst + i, src, size));
	printf("\n[%s] [%s] [%ld] [%ld]\n", dst, src, result, size);
	return (result);
}
