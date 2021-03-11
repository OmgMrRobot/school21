/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 12:09:04 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/06 12:09:07 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		counter(int argc, char **argv)
{
	int i;
	int size;
	int c;

	c = 0;
	i = 0;
	size = 0;
	while (i++ < argc - 1)
	{
		size = 0;
		while (argv[i][size] != '\0')
		{
			size++;
			c += size;
		}
	}
	return (c);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*p;
	int		i;
	int		size;
	int		c;

	i = 0;
	c = 0;
	size = counter(argc, argv);
	p = (char*)malloc((size + argc) * sizeof(char));
	if (!p)
		return (NULL);
	while (i++ < argc - 1)
	{
		size = 0;
		while (argv[i][size] != '\0')
		{
			p[c] = argv[i][size];
			c++;
			size++;
		}
		p[c] = '\n';
		c++;
	}
	p[c] = '\0';
	return (p);
}
