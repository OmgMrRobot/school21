/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:40:15 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/13 16:40:18 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *ptr;

	ptr = NULL;
	ptr = malloc(sizeof(t_btree));
	if (ptr)
	{
		ptr->item = item;
		ptr->left = NULL;
		ptr->right = NULL;
	}
	return (ptr);
}
