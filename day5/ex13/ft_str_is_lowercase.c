/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 18:39:09 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/04 18:39:20 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int index;
	int error;
	int a;

	index = 0;
	error = 0;
	if (str[index] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		a = str[index];
		if ('a' <= a && a <= 'z')
			error++;
		index++;
	}
	if (error == index)
		return (1);
	else
		return (0);
}
