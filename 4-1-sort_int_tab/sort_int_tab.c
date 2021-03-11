/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 16:29:53 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/15 16:29:56 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int tmp;

	i = 0;
	j = 0;
	tmp = 0;
	
	while(i < size - 1)
	{
		j = 0; // не забыть !!!
		while (j < size - i - 1)  // !!!!!!!!!
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j]; // запоминаю предыдущее значение
				tab[j] = tab[j + 1]; // записываем в индекс значение меньшего
				tab[j + 1] = tmp; // записываем в следующий индекс значение большего
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d\n",tab[i]);
		i++;
		
	}
}


int		main()
{
	int i[5] = {2,1,-5,-2,3};
	sort_int_tab(i, 5);
	return (0);
}
