/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 17:24:24 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/05 17:26:04 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*p;

	size = 0;
	while (src[size] != '\0')
		size++;
	p = (char*)malloc((size) * sizeof(char));
	if (!p)
		return (NULL);
	size = 0;
	while (src[size] != '\0')
	{
		p[size] = src[size];
		size++;
	}
	p[size] = '\0';
	return (p);
}
