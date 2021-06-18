/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_options.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 03:46:53 by guvillat          #+#    #+#             */
/*   Updated: 2020/03/10 18:48:24 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	skip_opt(char **argv)
{
	size_t	i;

	i = 1;
	while (argv[i] && argv[i][0] == '-')
	{
		if (ft_strcmp(argv[i], "--"))
			return (i + 1);
		i++;
	}
	return (i);
}
