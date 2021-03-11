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
#include "errno.h"
#include <sys/uio.h>

void	write_free(void)
{
	char c;

	while (read(STDIN_FILENO, &c, 1))
		write(1, &c, 1);
}

int		check_errno(char *argv)
{
	if (errno == EISDIR)
	{
		ft_putstr_error("ft_cat: ");
		ft_putstr_error(argv);
		ft_putstr_error(": Is a directory\n");
		errno = 0;
		return (0);
	}
	if (errno == EBADF)
	{
		ft_putstr_error("ft_cat: ");
		ft_putstr_error(argv);
		ft_putstr_error(": No such file or directory\n");
		errno = 0;
		return (0);
	}
	return (1);
}

int		open_write(int argc, char *argv)
{
	int		fd2;
	int		fd;
	char	c;
	int		i;

	i = 1;
	fd2 = open(&argv[argc - 1], O_WRONLY | O_CREAT | O_APPEND);
	while (i < argc - 1)
	{
		fd = open(argv, O_RDONLY);
		while (read(fd, &c, 1))
		{
			if (check_errno(argv) == 0)
				break ;
			else
				write(fd2, &c, 1);
		}
		i++;
	}
	close(fd);
	return (0);
}

int		open_read(char *argv)
{
	int		fd;
	char	c;

	fd = open(argv, O_RDONLY);
	if (errno == EACCES)
	{
		ft_putstr_error("ft_cat: ");
		ft_putstr_error(argv);
		ft_putstr_error(": Permission denied\n");
		errno = 0;
		return (0);
	}
	while (read(fd, &c, 1))
	{
		if (check_errno(argv) == 0)
			break ;
		else
			ft_putchar(c);
	}
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int flag;

	i = 1;
	flag = 0;
	if (argc == 1)
		write_free();
	while (i < argc)
	{
		if (ft_strcmp(">", argv[i]) == 0)
			flag++;
		i++;
	}
	i = 1;
	while (i < argc)
	{
		if (flag == 1)
			open_write(argc, argv[i]);
		open_read(argv[i]);
		i++;
	}
	argc = 0;
	return (0);
}
