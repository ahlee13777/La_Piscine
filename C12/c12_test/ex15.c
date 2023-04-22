/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:06:16 by minjaek2          #+#    #+#             */
/*   Updated: 2023/01/28 16:41:46 by minjaek2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list);
t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	print_data(void *data)
{
	printf("%s\n", data);
}

int	main(void)
{
	t_list	*list;
	char	*strs[3] = {"FIRST", "SECOND", "THIRD"};

	list = ft_list_push_strs(3, strs);
	printf(">>>BEFORE<<<\n");
	ft_list_foreach(list, &print_data);
	ft_list_reverse_fun(list);
	printf(">>>AFTER<<<\n");
	ft_list_foreach(list, &print_data);
	return (0);
}
