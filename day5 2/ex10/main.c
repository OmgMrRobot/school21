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

void	ft_putstr(char *str);
char	*ft_strcapitalize(char *str);

int		main(void)
{
	char lsr[] = "salut, comment tu vas ? 42mots quarante-deux;";
	ft_putstr(ft_strcapitalize(lsr));
	return (0);
}
