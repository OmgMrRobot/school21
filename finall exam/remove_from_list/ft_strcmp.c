/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:06:49 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/04 13:06:57 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int index;
	int error;

	index = 0;
	error = 0;
	while (s1[index] != '\0' || s1[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			error = s1[index] - s2[index];
			return (error);
		}
		index++;
	}
	if (s1[index] != s2[index])
	{
		error = s1[index] - s2[index];
		return (error);
	}
	return (0);
}
