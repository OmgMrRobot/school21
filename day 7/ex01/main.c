/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 12:30:46 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/03 12:30:49 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putstr(char *str);
int		*ft_range(int min, int max);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

int		main(void)
{
//	char dest[] = "123456789fnbisnbnn";
//	int a = 1;
	
	int index = 0;
	while (ft_range(-2, 10)[index] != '\0')
	{
		ft_putnbr(ft_range(78, 115)[index]);
		index++;
		ft_putchar(',');
		ft_putchar(' ');
	}

	return (0);
}
