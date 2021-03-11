/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 13:03:38 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/03 13:03:41 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	cycle(char *str, int i, int r_nb)
{
	int j;

	j = i;
	if (r_nb < 0)
	{
		j = i + 1;
		str[j] = '-';
	}
	while (j != -1)
	{
		ft_putchar(str[j]);
		j--;
	}
}

void	ft_putnbr(int nb)
{
	int		mod;
	int		div;
	int		i;
	int		r_nb;
	char	str[i];

	r_nb = nb;
	mod = 1;
	div = 1;
	i = 0;
	if (nb < 0)
		nb = nb * (-1);
	while (div != 0)
	{
		div = nb / 10;
		mod = nb % 10;
		str[i] = mod + '0';
		nb = div;
		i++;
	}
	if (r_nb == 0)
		i = 0;
	cycle(str, i, r_nb);
}
