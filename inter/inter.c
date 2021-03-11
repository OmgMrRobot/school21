/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:18:39 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/18 20:18:40 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	inter(int argc, char *argv1, char *argv2)
{
	int i;
	int j;
	int len;

	i = 0;
	argc = 0;
	len = 0;
	
	while (argv1[argc] != '\0')
	{
		i = 0;
		while (argv2[i] != '\0')
		{
			if (argv1[argc] == argv2[i])
			{
				write(1, &argv1[argc], 1);
				break ;
			}
			i++;
		}
		argc++;
	}
}




int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argc, argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
