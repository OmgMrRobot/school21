/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:04:01 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/10 18:04:03 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str);
int ft_putnbr(int nb);

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int t;

	t = 0;
	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			t++;
		i++;
	}
	return (t);
}

int		main()
{
	int		(*f)(char*);
	char	*tab[5] = {"t","h","i","s", 0};
	char	*tab2[7] = {"this", "should", "return", "two", "!", "!", 0};
	
	f = &ft_strlen;
	ft_putnbr(ft_count_if(tab, f));
	ft_putnbr(ft_count_if(tab2, f));
	return (0);
}
