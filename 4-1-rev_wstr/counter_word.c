/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 19:56:20 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/17 19:56:22 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_btree.h"

int		*count_spaces(char *str)
{
	int *mas;
	int i;
	int j;
	int len;

	i = 0;
	len = 0;
	while (str[i] == ' ' || str[i] == '\t') /*считаем кол-во в начале */
		i++;
	while (str[len] != '\0') /*считаем кол-во символов в строке */
		len++;
	j = len - 1;
	while (str[j] == ' ' || str[i] == '\t') /*считаем кол-во в конце */
		j--;
	mas = (int*)malloc(sizeof(int) * 4);
	mas[0] = i;
	mas[1] = j;
	mas[2] = len;
	return (mas);
}

int		counter_word(char *str)
{
	int c;
	int j;
	int i;

	i = count_spaces(str)[0];
	c = 0;
	j = 0;
	while (i <= count_spaces(str)[1])
	{
		j = i;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
		{
			while ((str[j + 1] == ' ' || str[j + 1] == '\t') \
				&& str[j + 1] == '\0')
				j++;
			c++;
		}
		i = j;
		i++;
	}
	return (c);
}
