/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:47:29 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/10 20:47:32 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		sum(int a, int b);
int		min(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		ft_strcmp(char *s1, char *s2);

int		calc(int a, int b, char *c)
{
	int (*massiv[5])(int, int);

	massiv[0] = &mul;
	massiv[1] = &sum;
	massiv[2] = &min;
	massiv[3] = &mod;
	massiv[4] = &div;
	if (ft_strcmp("*", c) == 0)
		return (massiv[0](a, b));
	else if (ft_strcmp("+", c) == 0)
		return (massiv[1](a, b));
	else if (ft_strcmp("-", c) == 0)
		return (massiv[2](a, b));
	else if (ft_strcmp("%", c) == 0)
		return (massiv[3](a, b));
	else if (ft_strcmp("/", c) == 0)
		return (massiv[4](a, b));
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4)
		return (0);
	while (argv[2][i] != '\0')
		i++;
	if (*argv[2] == '/' && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	else if (*argv[2] == '%' && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	argc = calc(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2]);
	ft_putnbr(argc);
	ft_putchar('\n');
	return (0);
}
