/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:51:30 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/10 18:51:31 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int t;
	int s;

	i = 0;
	t = 0;
	s = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			t++;
		if (f(tab[i], tab[i + 1]) >= 0)
			s++;
		i++;
	}
	if (t == length || s == length)
	{
		return (1);
	}
	return (0);
}
