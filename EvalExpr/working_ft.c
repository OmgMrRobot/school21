/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   working_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 13:50:57 by whortenc          #+#    #+#             */
/*   Updated: 2020/02/16 13:50:59 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_skobki_numb(char **str)
{
	int n;

	if (**str == '(')
	{
		(*str)++;
		n = ft_summa(str);
		if (**str == ')')
			(*str)++;
		return (n);
	}
	return (ft_atoi(str));
}

int		ft_multiple(char **str)
{
	char	multiple;
	int		n1;
	int		n2;

	n1 = ft_skobki_numb(str);
	while (**str)
	{
		multiple = **str;
		if (multiple != '*' && multiple != '/' && multiple != '%')
			return (n1);
		(*str)++;
		n2 = ft_skobki_numb(str);
		n1 = ft_operation1(n1, n2, multiple); // * % /
	}
	return (n1);
}

int		ft_summa(char **str)
{
	char	summa;
	int		n1;
	int		n2;

	n1 = ft_multiple(str);
	while (**str)
	{
		summa = **str;
		if (summa != '+' && summa != '-')
			return (n1);
		(*str)++;
		n2 = ft_multiple(str);
		n1 = ft_operation2(n1, n2, summa); // + -
	}
	return (n1);
}
