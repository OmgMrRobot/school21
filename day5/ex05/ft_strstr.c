/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:11:13 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/04 12:12:30 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index_str;
	int point_find;
	int error;

	index_str = 0;
	while (str[index_str] != '\0')
	{
		point_find = 0;
		error = 0;
		while (to_find[point_find] != '\0')
		{
			if (str[index_str + point_find] != to_find[point_find])
			{
				error++;
				break ;
			}
			point_find++;
		}
		if (error == 0)
			return (&str[index_str]);
		index_str++;
	}
	return ((char *)0);
}
