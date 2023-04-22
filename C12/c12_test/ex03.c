/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:05:28 by minjaek2          #+#    #+#             */
/*   Updated: 2023/02/02 20:21:26 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);

t_list	*ft_create_elem(void *data)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	p->data = data;
	p->next = NULL;

	return (p);
}

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*tp;

	tp = begin_list;
	while (tp->next)
		tp = tp->next;
	return (tp); 
}


int	main(void)
{
	t_list	*list;

	list = ft_create_elem("FIRST");
	list->next = ft_create_elem("SECOND");
	list->next->next = ft_create_elem("THIRD");
	printf("%s, %p\n", ft_list_last(list)->data, ft_list_last(list)->next);
	return (0);
}
