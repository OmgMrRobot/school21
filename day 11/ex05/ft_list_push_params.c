/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:20:32 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/11 18:20:34 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*begin;
	int		i;

	if (ac == 1)
		return (0);
	i = 1;
	begin = NULL;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = begin;
		begin = tmp;
		i++;
	}
	return (tmp);
}
