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
char	*ft_concat_params(int argc, char **argv);
void	ft_putchar(char c);
//void	ft_putnbr(int nb);

int		main(int argc, char **argv)
{
//	char dest[] = "123456789fnbisnbnn";
//	int a = 1;
	
	int index = 0;
	
	//while (ft_concat_params(argc, argv)[index] != '\0')
	//{
		ft_putstr(&ft_concat_params(argc, argv)[index]);
	//	index++;
	//}

	return (0);
}
