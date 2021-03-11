/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:51:08 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/10 17:51:09 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putnbr(int nb);
int		ft_strlen(char *str);

int		ft_any(char **tab, int (*f)(char*))
{
	int i;
	int j;
	
	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			return(1);
		i++;
	}
	return (0);
}

int		main()
{
	int		(*f)(char*);
	char	*tab[5] = {"these","are","too","long", 0};
	char	*tab2[6] = {"this", "last", "one", "is not", "!4", 0};
	
	f = &ft_strlen;
	ft_putnbr(ft_any(tab, f));
	ft_putnbr(ft_any(tab2, f));
	return (0);
}
