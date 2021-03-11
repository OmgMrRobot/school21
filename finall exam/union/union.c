/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:52:29 by csharon           #+#    #+#             */
/*   Updated: 2020/02/20 12:52:32 by csharon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		printif_1(char **argv)
{
	int i;
	int j;
	int flag;
	int c;

	i = 0;
	while (argv[1][i] != '\0')
	{
		j = 0;
		flag = 0;
		while (j < i)
		{
			if (argv[1][i] == argv[1][j])
			{
				flag = 1;
				break ;
			}
			j++;
		}
		if (flag == 0)
			write(1, &argv[1][i], 1);
		i++;
	}
	return (i);
}

void	printif_2(char **argv)
{
	int i;
	int j;
	int flag;
	int c;

	i = printif_1(argv);
	j = 0;
	c = 0;
	while (argv[2][j] != '\0')
	{
		c = 0;
		flag = 0;
		while (c < i)
		{
			if (argv[2][j] == argv[1][c])
			{
				flag = 1;
				break ;
			}
			c++;
		}
		c = 0;
		while (c < j)
		{
			if (argv[2][j] == argv[2][c])
			{
				flag = 1;
				break ;
			}
			c++;
		}
		if (flag == 0)
			write(1, &argv[2][j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	printif_2(argv);
	write(1, "\n", 1);
	return (0);
}
