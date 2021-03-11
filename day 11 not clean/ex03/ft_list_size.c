/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:34:23 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/11 17:34:26 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*tmp;

	tmp = begin_list;
	i = 0;
	if (!tmp) 
		return (i);
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
