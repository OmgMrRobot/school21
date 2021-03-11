/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 15:31:59 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/08 15:32:59 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	print_mas(int **outp)
{
	int s;
	int t;

	t = 0;
	s = 0;
	while (t < 9)
	{
		s = 0;
		while (s < 9)
		{
			ft_putnbr(outp[t][s]);
			ft_putchar(' ');
			s++;
		}
		ft_putchar('\n');
		t++;
	}
}

void	squar(int x, int y, int **outp, int *vector)
{
	int i_m;
	int j_m;
	int i;
	int j;

	i_m = (x) / 3;
	j_m = (y) / 3;
	j = 0;
	while (j <= 2)
	{
		i = 0;
		while (i <= 2)
		{
			if (outp[i_m * 3 + i][j_m * 3 + j] != 0)
				vector[outp[i_m * 3 + i][j_m * 3 + j] - 1] = 1;
			i++;
		}
		j++;
	}
}

int		*find(int x, int y, int **outp)
{
	int i;
	int *vector;

	vector = (int*)malloc((9) * sizeof(int));
	i = 0;
	while (i < 9)
	{
		vector[i] = 0;
		i++;
	}
	i = 0;
	while (i < 9)
	{
		if (outp[i][y] != 0)
			vector[outp[i][y] - 1] = 1;
		i++;
	}
	i = 0;
	while (i < 9)
	{
		if (outp[x][i] != 0)
			vector[outp[x][i] - 1] = 1;
		i++;
	}
	squar(x, y, outp, vector);
	return (vector);
}
