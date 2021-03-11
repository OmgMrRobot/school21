/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 18:44:47 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/04 18:45:28 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
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
		if ('A' <= a && a <= 'Z')
			error++;
		index++;
	}
	if (error == index)
		return (1);
	else
		return (0);
}
