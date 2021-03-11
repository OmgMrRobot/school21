/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:52:30 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/18 20:52:32 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	lastword(int argc, char *argv)
{
	int len;

	len = 0;
	argc = 0;

	while (argv[len] != '\0')
		len++;
	argc = len;
	while (argv[len - 1] == ' ')
		len--;
	while (0 < len - 1 && argv[len - 1] != ' ')
		len --;
	while (len < argc)
	{
		if (argv[len] != ' ')
			write(1, &argv[len], 1);
		len++;
	}
}





int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		lastword(argc, argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
