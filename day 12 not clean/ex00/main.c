/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:35:53 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/12 18:35:55 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_head.h"

void	open_read(char *argv)
{
	int		fd;
	char	c;

	fd = open(argv, O_RDONLY);
	if (fd < 0)
		return ;
	while (read(fd, &c, 1))
		ft_putchar(c);
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 20);
	else if (2 < argc)
		write(2, "Too many arguments.\n", 21);
	else
		open_read(argv[1]);
	return (0);
}
