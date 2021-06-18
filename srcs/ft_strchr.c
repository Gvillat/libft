/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:29:28 by guvillat          #+#    #+#             */
/*   Updated: 2019/07/09 10:33:26 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int32_t c)
{
	while (*s)
	{
		if ((char)c == *s)
			return ((char*)s);
		s++;
	}
	return (!(char)c ? (char *)&s[ft_strlen(s)] : NULL);
}
