/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:55:26 by guvillat          #+#    #+#             */
/*   Updated: 2020/03/05 01:20:33 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int16_t	ft_isdigit(int16_t c)
{
	return (c >= '0' && c <= '9');
}
