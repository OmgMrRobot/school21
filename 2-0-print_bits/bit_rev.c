//# **************************************************************************** #
//#                                                                              #
//#                                                         :::      ::::::::    #
//#    bit_rev                                            :+:      :+:    :+:    #
//#                                                     +:+ +:+         +:+      #
//#    By: lmarie <marvin@42.fr>                      +#+  +:+       +#+         #
//#                                                 +#+#+#+#+#+   +#+            #
//#    Created: 2020/02/19 19:02:58 by lmarie            #+#    #+#              #
//#    Updated: 2020/02/19 19:03:00 by lmarie           ###   ########.fr        #
//#                                                                              #
//# **************************************************************************** #

#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet);
void	printer(unsigned char nbr);


void print_bits2(unsigned octet)
{
	int i;

	i = 128;
	while (octet >= 0 && i)
	{
		(octet / i) ? write(1, "1", 1) : write(1, "0", 1);
		(octet / i) ? octet -= i : 0;
		i /= 2;
	}
}



unsigned char	reverse_bits(unsigned octet)
{
	int i;
	int j;
	unsigned char b;
	unsigned char r;

	i = 0;
	j = 7;
	b = 0;
	while ( 7 >= i)
	{
		r = octet;
		r = r >> i;
		r = r << j;
		b = b | r >> i;
		i++;
	}
	return (b);
}




int		main()
{
	print_bits2(15);
	write(1, "\n", 1);
	printf("%u",reverse_bits(15));
	return (0);
}

