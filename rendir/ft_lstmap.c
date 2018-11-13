/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:52:51 by guvillat          #+#    #+#             */
/*   Updated: 2018/11/09 11:54:35 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*current;

	if (!lst || !f)
		return (NULL);
	if (!(new = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	new = (*f)(new);
	while (lst->next)
	{
		lst = lst->next;
		if (!(current = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		ft_lstpush(new, (*f)(current));
	}
	return (new);
}
