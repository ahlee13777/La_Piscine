/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:05:31 by minjaek2          #+#    #+#             */
/*   Updated: 2023/02/02 21:17:35 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tp;
	t_list	*last;

	last = (t_list *)malloc(sizeof(t_list));
	if (*begin_list == NULL)
	{
		*begin_list = last;
		last->data = data;
		last->next = NULL;
		return ;
	}
	tp = *begin_list;
	while (tp->next != NULL)
		tp  = tp->next;
	tp->next = last; 
	last->data = data;
	last->next = NULL; 
}

int	main(void)
{
	t_list	*list;

	list = NULL;
	ft_list_push_back(&list, "FIRST");
	ft_list_push_back(&list, "SECOND");
	printf("%s, %p\n", list->data, list->next);
	printf("%s, %p\n", list->next->data, list->next->next);
	return (0);
}
