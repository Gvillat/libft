/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isescaped.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvillat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:33:58 by gvillat           #+#    #+#             */
/*   Updated: 2015/11/29 15:55:42 by gvillat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_isescaped(char c)
{
	if (c == '\a' || c == '\b' || c == '\f' || c == '\n' || c == '\r'
			|| c == '\t' || c == '\v')
		return (1);
	return (0);
}
