/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 20:54:26 by szhuang           #+#    #+#             */
/*   Updated: 2018/06/07 20:54:28 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int ans;

	ans = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		ans++;
	}
	return (ans);
}
