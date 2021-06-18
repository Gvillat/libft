/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:32:53 by guvillat          #+#    #+#             */
/*   Updated: 2019/07/09 11:05:33 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *s)
{
	char	*tmp;

	tmp = dst;
	while (*tmp)
		tmp++;
	ft_strcpy(tmp, s);
	return (dst);
}
