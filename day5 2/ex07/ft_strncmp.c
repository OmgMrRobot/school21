/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 15:39:11 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/04 15:39:14 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int un index;
	int error;

	index = 0;
	error = 0;
	while ((s1[index] != '\0' || s1[index] != '\0') && index < n - 1)
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
