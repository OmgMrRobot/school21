/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:18:36 by csharon           #+#    #+#             */
/*   Updated: 2020/02/18 20:18:38 by csharon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_cmp(char **argv)
{
	int i;
	int j;

	i = 0;
	while (argv[1][i] != '\0')
	{
		j = 0;
		while (argv[2][j] != '\0')
		{
			if (argv[2][j] == argv[1][i])
			{
				write(1, &argv[1][i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
}
int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	str_cmp(argv);
	write(1, "\n", 1);
	return (0);
}
