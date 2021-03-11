/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 20:29:51 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/05 20:29:53 by lmarie           ###   ########.fr       */
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
	if (!p || max <= min)
		return (NULL);
	while (index < (max - min))
	{
		p[index] = a;
		index++;
		a++;
	}
	return (p);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	else
		return (max - min);
}
