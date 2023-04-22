/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:06:24 by minjaek2          #+#    #+#             */
/*   Updated: 2023/01/28 20:31:09 by minjaek2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_sorted_list_merge(
			t_list **begin_list1, t_list *begin_list2, int (*cmp)());
t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while (*s3 || *s4)
	{
		if (*s3 - *s4)
			return (*s3 - *s4);
		s3++;
		s4++;
	}
	return (0);
}

void	print_data(void *data)
{
	printf("%s\n", data);
}

int	main(void)
{
	t_list	*list1;
	t_list	*list2;
	char	*strs1[3] = {"g", "gr2y8pUQVaPs", "sFO2rmb0MyE"};
	char	*strs2[3] = {"OV1f8YsabP", "G9gm0T", "GMejbx"};

	list1 = ft_list_push_strs(3, strs1);
	list2 = ft_list_push_strs(3, strs2);
	printf(">>>BEFORE<<<\n");
	printf(">list1<\n");
	ft_list_foreach(list1, &print_data);
	printf(">list2<\n");
	ft_list_foreach(list2, &print_data);
	ft_sorted_list_merge(&list1, list2, &ft_strcmp);
	printf(">>>AFTER<<<\n");
	ft_list_foreach(list1, &print_data);
	return (0);
}
