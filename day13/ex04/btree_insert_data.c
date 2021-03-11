/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 20:48:06 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/14 20:48:08 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_insert_data(t_btree **root, void *item,\
						  int (*cmpf)(void *, void *))
{
	t_btree *ptr;

	ptr = *root;
	if(!ptr)
	{
		btree_create_node(item);
		return ;
	}
	else if (cmpf(item, ptr->item) < 0)
		btree_insert_data(&(ptr->left), item, cmpf);
	else if (cmpf(item, ptr->item) >= 0)
		btree_insert_data(&(ptr->right), item, cmpf);
}
