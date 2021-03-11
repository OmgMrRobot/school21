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

t_list	*ft_create_elem(void *data);
int		ft_list_size(t_list *begin_list);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_list_last(t_list *begin_list);


t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*begin;
	int i;
	
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

int main(int argc, char **argv)
{
	t_list *list;
	t_list *begin_list;
	list = ft_list_push_params(argc, argv);
	ft_list_push_back(&list, &("last"));
	ft_list_push_front(&list, &("first"));
	
	
	
	begin_list = list;
	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	};
	list = begin_list;
	printf("%d\n", ft_list_size(list));
	printf("%s\n", ft_list_last(list)->data);
	return (0);
}
