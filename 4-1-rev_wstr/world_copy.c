/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world_copy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 19:59:05 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/17 19:59:07 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_btree.h"

void	world_copy(int i, char *str, char *copy)
{
	int a;

	a = 0;
	while (i <= count_spaces(str)[1])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
			break ;
		else
		{
			copy[a] = str[i];
			a++;
		}
		i++;
	}
	copy[a] = '\0';
}
