/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 20:17:19 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/04 20:17:22 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int index_dest;
	int index_src;

	index_src = 0;
	index_dest = 0;
	while (dest[index_dest] != '\0')
		index_dest++;
	while (src[index_src] != '\0' && index_src < size)
	{
		dest[index_dest + index_src] = src[index_src];
		index_src++;
	}
	if (src[index_src] == '\0')
		dest[index_dest + index_src] = '\0';
		return (*dest);
}
