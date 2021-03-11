/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:58:49 by csharon           #+#    #+#             */
/*   Updated: 2020/02/15 20:58:51 by csharon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet);

int		count_zero(unsigned char octet)
{
	int i = 0;
	while (octet != 0)
	{
		octet = octet / 2;
		i++;
	}
	return (i);
}

void	binary(unsigned char octet)
{
	if (octet == 0)
		return ;
	binary(octet / 2);
	if (octet % 2 == 0)
		write(1, "0", 1);
	else if (octet % 2 == 1)
		write(1, "1", 1);
}

void	print_bits(unsigned char octet)
{
	int i;
	int j;

	j = 0;
	i = 8 - count_zero(octet);
	while (j < i)
	{
		write(1, "0", 1);
		j++;
	}
	binary(octet);
}

int		main(void)
{
	unsigned char oc;
	oc = reverse_bits(38);
	printf("%u\n", reverse_bits(38));
	print_bits(38);
	printf("\n");
	print_bits(100);
	return (0);
}

