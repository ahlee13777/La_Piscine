/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 00:22:52 by minjaek2          #+#    #+#             */
/*   Updated: 2023/02/02 21:36:34 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

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
	char	*c;

	c = "TEST";
	list = ft_create_elem(c);
	printf("%s, %p\n", list->data, list->next);
	return (0);
}
