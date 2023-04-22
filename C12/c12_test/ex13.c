/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:06:09 by minjaek2          #+#    #+#             */
/*   Updated: 2023/01/28 05:17:30 by minjaek2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);
t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	print_data(void *data)
{
	printf("%s\n", data);
}

int	main(void)
{
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	char	*strs1[3] = {"THIRD", "SECOND", "FIRST"};
	char	*strs2[3] = {"THREE", "TWO", "ONE"};

	list1 = ft_list_push_strs(3, strs1);
	list2 = ft_list_push_strs(3, strs2);
	list3 = NULL;
	printf(">>>BEFORE<<<\n");
	printf(">list1<\n");
	ft_list_foreach(list1, &print_data);
	printf(">list2<\n");
	ft_list_foreach(list2, &print_data);
	printf(">list3<\n");
	ft_list_foreach(list3, &print_data);
	ft_list_merge(&list1, list2);
	ft_list_merge(&list3, list2);
	printf(">>>AFTER<<<\n");
	printf(">list1<\n");
	ft_list_foreach(list1, &print_data);
	printf(">list2<\n");
	ft_list_foreach(list2, &print_data);
	printf(">list3<\n");
	ft_list_foreach(list3, &print_data);
	return (0);
}
