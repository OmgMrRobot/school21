/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 16:24:33 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/04 16:24:37 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		new(char p)
{
	if ((97 <= p && p <= 122) || (65 <= p && p <= 90) || (48 <= p && p <= 57))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (new(str[index - 1]))
		{
			if (97 <= str[index] && str[index] <= 122)
				str[index] = str[index] - 32;
		}
		else if (65 <= str[index] && str[index] <= 90)
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}
