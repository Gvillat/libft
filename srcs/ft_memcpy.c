/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:27:26 by guvillat          #+#    #+#             */
/*   Updated: 2020/03/05 01:06:31 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *s, size_t n)
{
	const char	*tmp_s;
	char		*tmp_dst;
	size_t		i;

	i = 0;
	tmp_dst = dst;
	tmp_s = s;
	while (n--)
	{
		tmp_dst[i] = tmp_s[i];
		i++;
	}
	return (dst);
}
