/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:03:42 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/19 17:03:46 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	epur_str(char *str)
{
	int start;
	int end;
	int len;

	start = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	end = len - 1;
	while ((str[end] == ' ' || str[end] == '\t') && start <= end)
		end--;
	while (str[start] != '\0')
	{
		while (!(str[start] ==' ' || str[start] == '\t') \
			&& str[start] != '\0' )
		{
			write(1, &str[start], 1);
			start++;
			if ((str[start] == ' ' || str[start] == '\t') && start < end)
				write(1, &str[start], 1);
		}
		start++;
	}
}

int		main(int argc, char **argv)
{
	epur_str(argv[1]);
	write(1, "\n", 1);
}
