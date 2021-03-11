/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 17:52:48 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/04 17:52:50 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
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
		if (('A' <= a && a <= 'Z') || ('a' <= a && a <= 'z'))
			error++;
		index++;
	}
	if (error == index)
		return (1);
	else
		return (0);
}
