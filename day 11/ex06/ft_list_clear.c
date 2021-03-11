/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 21:12:42 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/12 21:12:44 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*ptr;

	tmp = *begin;
	ptr = tmp;
	while (tmp)
	{
		free(tmp);
		ptr = ptr->next;
		*begin_list = ptr;
	}
	*begin_list = NULL;
	tmp = NULL;
	ptr = NULL;
}
