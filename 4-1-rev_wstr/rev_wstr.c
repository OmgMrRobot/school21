/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:58:09 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/16 18:58:13 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_btree.h"

void	ft_range_fuller(int i, char **string, char *str, int a)
{
	int c;

	c = counter_character(i, str);
	string[a] = (char*)malloc(sizeof(char) * (c + 10));
}

void	ft_print(char *str, char **string, int a)
{
	int i;

	i = a - 1;
	while (0 <= i)
	{
		ft_putstr(string[i]);
		if (i > 0)
			write(1, " ", 1);
		i--;
	}
}

void	rev_wstr(int i, int a, char *str)
{
	char	**string;
	int		j;

	string = (char**)malloc(sizeof(char*) * (counter_word(str)));
	while (i++ <= count_spaces(str)[1] + 1) /* пропускаем все пробелы*/
	{
		j = i;
		while (j <= count_spaces(str)[1] + 2)
		{
			if (str[j] == ' ' || str[j] == '\t' \
				|| str[j] == '\0')
			{
				ft_range_fuller(i, string, str, a); /* выделяем память*/
				world_copy(i, str, string[a]); /* копируем слова в новый массив*/
				a++;
				while ((str[j + 1] == ' ' || str[j + 1] == '	'))
					j++;
				i = j;
				break ;
			}
			j++;
		}
	}
	ft_print(str, string, a);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_wstr(count_spaces(argv[1])[0] - 1, 0, argv[1]);
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
