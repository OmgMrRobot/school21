/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 15:00:36 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/06 15:02:32 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*counter(*str)
{
	int		c;
	int		w;
	int		a[2];
	
	
	w = 0;
	c = 0;
	while (str[c] == ' ' && str[c] == '\t' && str[c] == '\n')
		c++;
	while (str[c] != '\0')
	{
		if (str[c] != ' ' && str[c] != '\t' && str[c] != '\n')
			w++;
		c++;
	}
	a[0] = w;
	a[1] = c;
	return (a);
}

char	**ft_split_whitespaces(char *str)
{
	char	**string;
	char	**index;
	int		c;
	int		w;
	int		l;

	w = counter(*str)[0];
	c = counter(*str)[1];
	l = 0;
	*string = (char*)malloc((c - 1) * sizeof(char));
//	if (!*string)
//		return (NULL);
	c = 0;
	while (l < w)
	{
		c = 0;
		while (str[c] != '\0')
		{
			*string[c] = str[c];
			c++;
		}
		index[l] = string;
		l++;
	}
	return (index);
}
