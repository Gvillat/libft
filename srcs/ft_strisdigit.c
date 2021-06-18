/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:59:58 by guvillat          #+#    #+#             */
/*   Updated: 2020/03/05 01:23:44 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strisdigit(const char *str)
{
	size_t	index;

	index = 0;
	if (str)
	{
		while (str[index])
		{
			if (ft_isdigit(str[index]))
				index++;
			else
				return (0);
		}
	}
	return (index);
}
