/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:12:01 by lmarie            #+#    #+#             */
/*   Updated: 2020/02/11 15:12:04 by lmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	char			*data;
}					t_list;
t_list	*ft_create_elem(void *data);
int		ft_strcmp(char *s1, char *s2);
int		ft_list_size(t_list *begin_list);
#endif
