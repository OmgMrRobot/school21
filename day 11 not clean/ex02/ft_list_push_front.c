/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:18:01 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/11 17:18:03 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;
	
	if (*begin_list)
		tmp = *begin_list;
		tmp->next = next;
		tmp = ft_create_elem(data);
	else
		begin_list = ft_create_elem(data);
}
