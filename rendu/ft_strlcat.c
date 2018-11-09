/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:32:40 by guvillat          #+#    #+#             */
/*   Updated: 2018/11/09 13:34:07 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t lol;

	i = 0;
	while (dst[i])
		i++;
	if (!i)
	{
		while (src[i++] && i < size)
		{
			dst[i - 1] = src[i - 1];
		}
		dst[i - 1] = '\0';
		return (ft_strlen(src));
	}
	if (size <= i)
		return (size + ft_strlen(src));
	lol = 0;
	while (i + lol + 1 < size)
	{
		dst[i + lol] = src[lol];
		lol += 1;
	}
	dst[i + lol] = '\0';
	return ((size + i) - (size - i));
}
