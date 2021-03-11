/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 19:16:57 by csharon           #+#    #+#             */
/*   Updated: 2020/02/15 19:16:59 by csharon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	*ft_itoa(int nbr)
{
	int size;
	unsigned int nbr2;
	char *str;
	int i;
	unsigned int nbr3;

	nbr2 = nbr;
	i = 0;
	if (nbr < 0)
	{
		nbr3 = nbr * (-1);
		nbr2 = nbr * (-1);
	}
	else
	{
		nbr3 = nbr;
		nbr2 = nbr;
	}
	while (nbr3 != 0)
	{
		nbr3 = nbr3 / 10;
		size++;
	}
	printf("%d\n", size);
	if (nbr > 0)
	{
		i = size;
		str = (char*)malloc(sizeof(*str) * (size + 1));
		str[i] = '\0';
		while (i > 0)
		{
			i--;
			str[i] = nbr2 % 10 + '0';
			nbr2 = nbr2 / 10;
		}
	}
	else if (nbr == 0)
	{
		str = (char*)malloc(sizeof(*str) * 2);
		str[0] = '0';
		str[1] = '\0';
	}
	else if (nbr < 0)
	{
		str = (char*)malloc(sizeof(*str) * (size + 2));
		i = size + 1;
		str[i] = '\0';
		while (i > 0)
		{
			i--;
			str[i] = nbr2 % 10 + '0';
			nbr2 = nbr2 / 10;
		}
	str[i] = '-';
	}
	i = 0;
	while (i < size + 1)
	{
		printf("%c", str[i]);
		i++;
	}
	return (str);
}

int		main(void)
{
	int nbr = -214623765;
	ft_itoa(nbr);
	
	return (0);
}
