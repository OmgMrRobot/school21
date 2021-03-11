/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 19:05:57 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/04 19:06:06 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
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
		if (32 <= a && a <= 127)
			error++;
		index++;
	}
	if (error == index)
		return (1);
	else
		return (0);
}
