/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 20:28:23 by csharon           #+#    #+#             */
/*   Updated: 2020/02/19 20:28:25 by csharon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet);

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	int j;
	unsigned char res;
	unsigned char b;

	i = 7;
	j = 0;
	res = 0;
	while(j <= 7)
	{
		b = octet >> j;
		b = b << i;
		b = b >> j;
		res = res | b;
		j++;
		b = 0;
	}
	return (res);
}

//int		main(void)
//{
//	print_bits(2);
//	return (0);
//}

