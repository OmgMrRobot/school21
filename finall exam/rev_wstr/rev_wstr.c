/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:06:09 by csharon           #+#    #+#             */
/*   Updated: 2020/02/16 18:06:10 by csharon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		len_string(char **argv)
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		i++;
	}
	return (i);
}

int		*spaces(char **argv)
{
	int i;
	int j;
	int c;
	int *mas;

	i = 0;
	c = 0;
	j = len_string(argv) - 1;
	mas = (int*)malloc(sizeof(int) * len_string(argv));
	while (argv[1][i] == ' ' || argv[1][i] == '	')
	{
		i++;
	}
	while (argv[1][j] == ' ' || argv[1][j] == '	')
	{
		j--;
	}
	mas[0] = i;
	mas[1] = j;
	return (&(*mas));
}

int		count_words(char **argv)
{
	int c;
	int i;
	int j;

	c = 0;
	i = spaces(argv)[0];
	j = 0;
	while (i <= spaces(argv)[1] + 1)
	{
		j = i;
		if ((argv[1][i] == ' ' || argv[1][i] == '	' || argv[1][i] == '\0'))
		{
			j = i;
			while ((argv[1][j] == ' ' || argv[1][j] == '	')\
			&& (argv[1][j] != '\0'))
				j++;
			c++;
		}
		i = j;
		i++;
	}
	return (c);
}

int		main(int argc, char **argv)
{
	char	**str;
	int		i;
	int		j;
	int		c;
	int		m;

	i = 0;
	j = spaces(argv)[0];
	c = 0;
	m = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
//	printf("%d\n", len_string(argv));
//	while (i != 2)
//	{
//		printf("%d\n", spaces(argv)[i]);
//		i++;
//	}
	i = 0;
//	printf("%s\t%d\n", "Count words = ", count_words(argv));
	str = (char**)malloc(sizeof(char*) * (count_words(argv)));
	while (i < count_words(argv))
	{
		c = 0;
		m = 0;
 		while (j <= spaces(argv)[1] + 1)
		{
			if (argv[1][j] == ' ' || argv[1][j] == '	' \
				|| argv[1][j] == '\0')
				break;
			else
			{
				m++;
				j++;
			}
		}
		j = j - m;
		str[i] = (char*)malloc(sizeof(char) * len_string(argv));
		while (c < m)
		{
			str[i][c] = argv[1][j];
			j++;
			c++;
		}
		str[i][c] = '\0';
		printf("%s\t%s\t%d\n", "Test copy words = ", str[i], m);
		while (argv[1][j + 1] == ' ' || argv[1][j + 1] == '	')
			j++;
		i++;
		j++;
	}
	i = count_words(argv);
	j = count_words(argv) - 1;
	printf("\n");
	while (i-- > 0)
	{
		printf("%s", str[i]);
		if (i > 0)
			printf("%c", ' ');
	}

	printf("%c", '\n');
	return (0);
}
