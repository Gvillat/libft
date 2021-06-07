/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 00:50:59 by guvillat          #+#    #+#             */
/*   Updated: 2020/03/05 01:15:27 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared_libft.h"

char	**ft_tabchr(char **tab_src, char *str)
{
	size_t	i;

	i = 0;
	if (tab_src && str)
	{
		while (tab_src[i])
		{
			if (ft_strcmp(tab_src[i], str) == 0)
				return (tab_src + i);
			i++;
		}
	}
	return (NULL);
}
