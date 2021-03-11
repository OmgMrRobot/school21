/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:27:00 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/10 17:27:02 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int index;
	int *num;

	num = (int*)malloc(length * sizeof(int));
	index = 0;
	while (index < length)
	{
		num[index] = f(tab[index]);
		index++;
	}
	return (num);
}
