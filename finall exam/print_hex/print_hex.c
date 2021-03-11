/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:03:20 by csharon           #+#    #+#             */
/*   Updated: 2020/02/20 18:03:23 by csharon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		atoi(char **argv)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (argv[1][i] == ' ' || argv[1][i] == '	')
	{
		i++;
	}
	while (argv[1][i] >= '0' && argv[1][i] <= '9')
	{
		b = b * 10 + (argv[1][i] - '0');
		i++;
	}
	if (b == 0)
		write(1, "0", 1);
	return (b);
}

void	hex(int nbr)
{
	char i;

	if (nbr == 0)
		return ;
	hex(nbr / 16);
	if ((nbr % 16 >= 0) && (nbr % 16 <= 9))
	{
		i = nbr % 16 + '0';
		write(1, &i, 1);
	}
	else if ((nbr % 16 >= 10) && (nbr % 16 <= 15))
	{
		i = 'a' + (nbr % 16 - 10);
		write (1, &i, 1);
	}
//	printf("%d\n", atoi(argv));
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	hex(atoi(argv));
	write(1, "\n", 1);
	return (0);
}
