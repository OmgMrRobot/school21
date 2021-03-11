/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 18:25:56 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/04 18:25:59 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
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
		if ('0' <= a && a <= '9')
			error++;
		index++;
	}
	if (error == index)
		return (1);
	else
		return (0);
}
