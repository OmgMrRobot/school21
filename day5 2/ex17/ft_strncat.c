/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 19:53:55 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/04 19:53:58 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int index_dest;
	int index_src;

	index_src = 0;
	index_dest = 0;
	while (dest[index_dest] != '\0')
		index_dest++;
	while (src[index_src] != '\0' && index_src < nb)
	{
		dest[index_dest + index_src] = src[index_src];
		index_src++;
	}
	if (src[index_src] == '\0')
		dest[index_dest + index_src] = '\0';
	return (dest);
}
