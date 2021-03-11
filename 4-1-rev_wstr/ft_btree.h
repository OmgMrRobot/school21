/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:39:59 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/13 16:40:01 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		counter_character_in_string(char *str);

int		counter_character(int i, char *str);

int		counter_word(char *str);

void	world_copy(int i, char *str, char *string);

void	ft_putnbr(int nb);

int		*count_spaces(char *str);

#endif
