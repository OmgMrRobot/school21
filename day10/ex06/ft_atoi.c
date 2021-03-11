/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 15:40:30 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/03 15:40:33 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		sign;
	int		j;
	int		equal;

	sign = 1;
	equal = 0;
	while (0 <= *str && *str <= 32)
		str++;
	if (*str == '-')
	{
		str++;
		sign = -1;
	}
	else if (*str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		j = *str - '0';
		if (!(47 <= *(str + 1) && *(str + 1) <= 57))
			return (sign * (equal * 10 + j));
		equal = equal * 10 + j;
		str++;
	}
	return (0);
}
