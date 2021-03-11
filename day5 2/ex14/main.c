/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 12:30:46 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/03 12:30:49 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);
int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char lsr[] = "AFKVFJK1";
	printf("%d",ft_str_is_uppercase(lsr));
	return (0);
}
