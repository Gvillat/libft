/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 13:56:01 by guvillat          #+#    #+#             */
/*   Updated: 2020/02/07 00:16:20 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(t_lst *lst)
{
	t_lst	*node;
	size_t	len;

	len = 0;
	node = lst;
	if (!lst)
		return (0);
	while (node->next)
	{
		node = node->next;
		len++;
	}
	return (len + 1);
}
