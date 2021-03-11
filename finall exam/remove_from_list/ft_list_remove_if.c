/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 13:30:51 by csharon           #+#    #+#             */
/*   Updated: 2020/02/16 13:30:53 by csharon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int		list_len(t_list **begin_list)
{
	t_list *tmp;
	int i;
	
	i = 0;
	tmp = *begin_list;
	if (!tmp)
		return (i);
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *sled;
	t_list *prev;

	tmp = *begin_list;
	sled = NULL;
	prev = NULL;
	while (tmp != NULL)
	{
		sled = tmp->next;
		if (cmp(tmp->data, data_ref) == 0)
		{
			if (prev)
			{
				prev->next = sled;
				free(tmp);
			}
			else
			{
				free(tmp);
				*begin_list = sled;
			}
		}
		else
			prev = tmp;
		tmp = sled;
	}
}

int		main(void)
{
	t_list *f;
	t_list *t;
	t_list *n;
	t_list *d;
	t_list *y;
	t_list *u;
	t_list *tmp;

	tmp = NULL;
	//tmp = f;
	f = ft_create_elem("123");
	t = ft_create_elem("54389");
	n = ft_create_elem("234");
	d = ft_create_elem("ddd");
	y = ft_create_elem("yyy");
	u = ft_create_elem("uuu");
	
	
	f->next = t;
	t->next = n;
	n->next = d;
	d->next = y;
	y->next = u;
	tmp = f;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->data);
		tmp = tmp->next;
	}
	
	printf("%d\n", list_len(&f));
	ft_list_remove_if(&f, "234", &ft_strcmp);
	printf("%d\n", list_len(&f));
	tmp = f;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->data);
		tmp = tmp->next;
	}
//	printf("%s\n", n->data);
//	printf("%s\n", t->data);
//	printf("%s\n", f->data);
	return(0);
}
