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

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	print_mas(int **outp);
void	squar(int x, int y, int **outp, int *vector);
int		*find(int x, int y, int **outp);

void	tru_insr(int i, int j, int l, int **outp)
{
	int sum;
	int *vector;

	while (j <= 8)
	{
		i = 0;
		while (i <= 8)
		{
			if (outp[i][j] == 0)
			{
				l = 0;
				vector = find(i, j, outp);
				while (l <= 8)
				{
					sum = sum + vector[l];
					l++;
				}
				if (sum == 8)
				{
					l = 0;
					while (l <= 8)
					{
						if (vector[l] != 1)
							outp[i][j] = l + 1;
						l++;
					}
				}
			}
			sum = 0;
			i++;
		}
		j++;
	}
}

void	rekurs_mass(int x, int y, int **outp)
{
	int i;
	int j;
	int l;

	i = 0;
	j = 0;
	l = 0;
	tru_insr(i, j, l, outp);
	if (x <= 8)
	{
		x++;
		rekurs_mass(x, y, outp);
	}
	else if (y < 8)
	{
		x = 0;
		y++;
	}
}

void	per_mass(int n, char **ishod)
{
	int x;
	int y;
	int **outp;

	x = 0;
	outp = (int**)malloc((n - 1) * sizeof(int*));
	while (ishod[x] != '\0')
	{
		outp[x] = (int*)malloc((n - 1) * sizeof(int));
		x++;
	}
	x = 1;
	while (ishod[x] != '\0')
	{
		y = 0;
		while (ishod[x][y] != '\0')
		{
			if (ishod[x][y] != '.')
				outp[x - 1][y] = ishod[x][y] - '0';
			else
				outp[x - 1][y] = 0;
			y++;
		}
		x++;
	}
	rekurs_mass(0, 0, outp);
	print_mas(outp);
}

int		main(int argc, char **argv)
{
	if (argc == 10)
	{
		per_mass(argc, argv);
	}
}
