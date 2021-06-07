/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 14:00:53 by guvillat          #+#    #+#             */
/*   Updated: 2020/05/07 14:13:50 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared_libft.h"

void		ft_lstdel(t_lst **alst, void (*del)(void *, size_t))
{
	t_lst	*link;

	link = *alst;
	while (*alst)
	{
		link = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = link;
	}
	*alst = NULL;
}
