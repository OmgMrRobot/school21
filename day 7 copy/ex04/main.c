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
char	**ft_split_whitespaces(char *str);
//void	ft_putnbr(int nb);

int		main(int argc, char **argv)
{
	int index;
	
	char str[] = "qwe qwewqw";
	index = 0;
	while (str[index] != '\0')
	{
		ft_putstr(ft_split_whitespaces(str)[index]);
		ft_putchar('\n');
		index++;
	}
	return (0);
}
