/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexp_n_delete_space_ft.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 14:58:30 by whortenc          #+#    #+#             */
/*   Updated: 2020/02/16 14:58:32 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*delete_spaces(char *str)
{
	int		i;
	int		k;
	char	*newone;

	k = 0;
	i = 0;
	newone = NULL;
	newone = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			newone[k] = str[i];
			k++;
		}
		i++;
	}
	newone[k] = '\0';
	free(newone);
	return (newone);
}

int		eval_expr(char *str)
{
	if (str[0] != '\0') // если не конец, мы удаляем пробелы
		str = delete_spaces(str);
	if (str[0] == '\0')
		return (0);
	else
		return (ft_summa(&str)); // возврашаем результат
}


int		main(int argc, char **argv)
{
	eval_expr(argv[1]);
}
