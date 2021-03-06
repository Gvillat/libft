/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:28:46 by guvillat          #+#    #+#             */
/*   Updated: 2020/03/05 01:18:42 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int16_t c, size_t len)
{
	unsigned char	*tmp;

	tmp = s;
	while (len--)
		*tmp++ = (unsigned char)c;
	return (s);
}
