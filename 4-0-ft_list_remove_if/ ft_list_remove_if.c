/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcedra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:34:55 by kcedra            #+#    #+#             */
/*   Updated: 2020/02/12 21:25:25 by kcedra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *element; // текущий элеменет
	t_list *pre; // предыдущий элемент
	t_list *temp; // следующий элемент

	pre = NULL;
	temp = NULL;
	
	element = *begin_list; // поставили поинтер на начало листа
	
	while (element != NULL) // цикл, пока мы не дойдем до конца begin_list
	{

		temp = element->next; // записываем ссылку на следующий элемент
	
		if(cmp(element->data, data_ref) == 0) // если элементы совпадают
		{
			if (pre) // если предыдущего элемента есть
			{
				pre->next = temp; // востанавливаем связь, предыдущий указываем на следующий элем
				free(element);
			}
			else // если предыдущего элемента нет
			{
				free(element); // удаляем ссылку на нужный элемент
				*begin_list = temp; //изменяем ссылку на начало, для проверки
			}
		}
		else
			pre = element; // текущий становится предыдущим
		element = temp; // двигаемся по листу
	}
}




int		main(void)
{
	t_list *f;
	t_list *t;
	t_list *n;
	int i;
	
	f = ft_create_elem("123");
	t = ft_create_elem("2314");
	n = ft_create_elem("2134");
	
	f->next = t;
	t->next = n;
	
	ft_list_size(f);
	printf("%d\n", ft_list_size(f));
	
	ft_list_remove_if(&f, "123", &ft_strcmp);
	printf("%d\n", ft_list_size(f));
//	printf("%s\n", n->data);
//	printf("%s\n", t->data);
//	printf("%s\n", f->data);
	return(0);
}

