/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:05:35 by minjaek2          #+#    #+#             */
/*   Updated: 2023/01/28 02:41:26 by minjaek2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);

int	main(void)
{
	t_list	*list;
	char	*strs[3] = {"THIRD", "SECOND", "FIRST"};

	list = ft_list_push_strs(0, strs);
	list = ft_list_push_strs(3, strs);
	while (list)
	{
		printf("%s, %p\n", list->data, list->next);
		list = list->next;
	}
	return (0);
}
