/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvillat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 19:07:34 by gvillat           #+#    #+#             */
/*   Updated: 2015/12/16 21:24:44 by gvillat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	size_t			slen;
	size_t			dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	if (size <= dlen)
		return (slen + size);
	while (dst[i] && i < size - 1)
		i++;
	while (i < size - 1 && *src)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (slen + dlen);
}
