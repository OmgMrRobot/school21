/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:03:06 by csharon           #+#    #+#             */
/*   Updated: 2020/02/15 18:03:08 by csharon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int c;
	unsigned int i;
	unsigned int j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j +1])
			{
				c = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = c;
			}
			j++;
		}
		i++;
	//	j = size - 1;
	}
	j = 0;
	while (j < size)
	{
		printf("%d\t", tab[j]);
		j++;
	}
}

int		main(void)
{
	int tab[10] = {-9, -5, -3, -6, -7, -8, -4, -2, -1,5};
	sort_int_tab(tab, 10);
	return (0);
}
