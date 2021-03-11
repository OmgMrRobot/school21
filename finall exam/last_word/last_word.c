/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:40:54 by csharon           #+#    #+#             */
/*   Updated: 2020/02/18 20:40:57 by csharon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		str_len(char **argv)
{
	int len;

	len = 0;
	while (argv[1][len] != '\0')
	{
		len++;
	}
	return (len);
}

void	last_word(char **argv)
{
	int i;
	int j;

	i = str_len(argv) - 1;
	while (argv[1][i] == ' ' || argv[1][i] == '	')
		i--;
	j = i;
	while (argv[1][i] > 32)
		i--;
//	printf("\n%s\t%d\n", "begin with", i);
//	printf("%s\t%d\n", "finish with", j);
	//i++;
	while (i++ < j)
	{
		write(1, &argv[1][i], 1);
		//i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2 || str_len(argv) == 0)
	{
		write(1, "\n", 1);
		return (0);
	}
	last_word(argv);
//	printf("\n%s\t%d\n", "str len", str_len(argv));
	return (0);
}
