/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 19:35:44 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/15 19:35:46 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	zero_counter(unsigned char nbr)
{
	int i;
	
	i = 0;
	while(nbr != 0)
	{
		nbr = nbr / 2;
		i++;
	}
//	printf("%d", 8 - i);
	i = 8  - i;
	while(0 < i)
	{
		write(1, "0", 1);
		i--;
	}
}

void	printer(unsigned char nbr)
{
	if (nbr == 0)
		return ;
	printer(nbr / 2);
	if (nbr % 2 == 0)
		write(1, "0", 1);
	if (nbr % 2 == 1)
		write(1, "1",1);
}

void	print_bits(unsigned char octet)
{

	zero_counter(octet);
	printer(octet);

}

//int		main(void)
//{
//	print_bits(7);
////	printf("%d", atoi('1'));
//	return (0);
//}

