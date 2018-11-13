/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:43:54 by guvillat          #+#    #+#             */
/*   Updated: 2018/11/09 13:44:00 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = ft_strnew(len);
	if (s2 == NULL || s == NULL)
		return (NULL);
	while (len--)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	return (s2);
}
