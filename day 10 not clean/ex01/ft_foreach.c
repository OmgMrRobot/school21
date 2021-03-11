/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:43:31 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/10 16:43:33 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int index;
	
	index = 0;
	while (index < length)
	{
		f(tab[index]);
		index++;
	}
}

int main()
{
	int tab[4] = {1,2,3,4};
	ft_foreach(tab, 4, &ft_putnbr);
	return (0);
}
