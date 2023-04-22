/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:05:40 by minjaek2          #+#    #+#             */
/*   Updated: 2023/01/28 02:54:23 by minjaek2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list	*ft_list_push_strs(int size, char **strs);

void	free_fct(void *data)
{
	free(data);
}

int	main(void)
{
	t_list	*list;
	char	*strs[3] = {"THIRD", "SECOND", "FIRST"};

	list = ft_list_push_strs(3, strs);
	printf(">>>BEFORE<<<\n");
	while (list)
	{
		printf("%s, %p\n", list->data, list->next);
		list = list->next;
	}
	ft_list_clear(list, &free_fct);
	printf(">>>AFTER<<<\n");
	while (list)
	{
		printf("%s, %p\n", list->data, list->next);
		list = list->next;
	}
	return (0);
}
