/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:05:47 by minjaek2          #+#    #+#             */
/*   Updated: 2023/01/28 03:30:46 by minjaek2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list);
t_list	*ft_list_push_strs(int size, char **strs);

int	main(void)
{
	t_list	*list;
	t_list	*temp;
	char	*strs[3] = {"FIRST", "SECOND", "THIRD"};

	list = ft_list_push_strs(3, strs);
	temp = list;
	printf(">>>BEFORE<<<\n");
	while (temp)
	{
		printf("%s, %p\n", temp->data, temp->next);
		temp = temp->next;
	}
	ft_list_reverse(&list);
	temp = list;
	printf(">>>AFTER<<<\n");
	while (temp)
	{
		printf("%s, %p\n", temp->data, temp->next);
		temp = temp->next;
	}
	return (0);
}
