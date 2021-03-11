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

int ft_putnbr(int nb);

int ft_minus(int a , int b)
{
	return (b - a);
}

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
		if (f(tab[i], tab[i +1]) <= 0)
			t++;
		if (f(tab[i], tab[i +1]) >= 0)
			s++;
		i++;
	}
	if (t == length || s == length)
	{
		return (1);
	}
	return (0);
}

int		main()
{
	int		tab[9] = {1,2,3,3,9,6,7,8,9};
	int		tab2[9] = {9,8,7,6,5,4,3,2,1};
	int		(*f)(int, int);
	
	f	=	&ft_minus;
	ft_putnbr(ft_is_sort(tab, 9, f));
	ft_putnbr(ft_is_sort(tab2, 9, f));
	return (0);
}
