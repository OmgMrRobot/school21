/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 18:10:28 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/13 18:10:31 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	t_btree *ptr;

	ptr = root;
	if (ptr == NULL)
		return ;
	btree_apply_suffix(ptr->left, applyf);
	btree_apply_suffix(ptr->right, applyf);
	applyf(ptr->item);
}
