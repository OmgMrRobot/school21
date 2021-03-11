/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 19:22:28 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/04 19:22:32 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int index_dest;
	int index_src;

	index_src = 0;
	index_dest = 0;
	while (dest[index_dest] != '\0')
		index_dest++;
	while (src[index_src] != '\0')
	{
		dest[index_dest + index_src] = src[index_src];
		index_src++;
	}
	return (dest);
}
