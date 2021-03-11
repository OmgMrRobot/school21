/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter_character.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 19:58:12 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/17 19:58:15 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_btree.h"

int		counter_character(int i, char *str)
{
	int c;

	c = 0;
	while (i++ <= count_spaces(str)[1] + 1)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
			break ;
		c++;
	}
	return (c);
}
