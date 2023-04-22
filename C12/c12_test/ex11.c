/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaek2 <minjaek2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:05:59 by minjaek2          #+#    #+#             */
/*   Updated: 2023/01/28 04:07:05 by minjaek2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
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
	t_list	*list;
	char	*strs[3] = {"THIRD", "SECOND", "FIRST"};

	list = ft_list_push_strs(3, strs);
	printf(">>>BEFORE<<<\n");
	ft_list_foreach(list, &print_data);
	list = ft_list_find(list, "SECOND", &ft_strcmp);
	printf(">>>AFTER<<<\n");
	ft_list_foreach(list, &print_data);
	return (0);
}
