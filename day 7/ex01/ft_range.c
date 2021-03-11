/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:16:51 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/05 18:16:53 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *p;
	int index;
	int a;

	index = 0;
	a = min;
	p = (int*)malloc((max - min) * sizeof(int));
	if (!p)
		return (NULL);
	while (index < (max - min) && max != a)
	{
		p[index] = a;
		index++;
		a++;
	}
	return (p);
}
