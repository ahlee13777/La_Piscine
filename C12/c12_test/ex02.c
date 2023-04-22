/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:05:18 by minjaek2          #+#    #+#             */
/*   Updated: 2023/02/02 20:14:50 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		size;
	t_list *p;

	size = 0;
	p = begin_list;
	while (p)
	{
		p = p->next;
		size++;
	}
	return (size);
}

t_list	*ft_create_elem(void *data)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	p->data = data;
	p->next = NULL;

	return (p);
}

int	main(void)
{
	t_list	*list;

	list = ft_create_elem("FIRST");
	list->next = ft_create_elem("SECOND");
	printf("%d\n", ft_list_size(list));
	return (0);
}
