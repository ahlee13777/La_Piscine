/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:48:58 by ahhlee            #+#    #+#             */
/*   Updated: 2023/02/02 21:36:36 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

//새로운 요소 생성
t_list	*ft_create_elem(void *data)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	p->data = data;
	p->next = NULL;
	
	return (p);
}

//새로운 요소 맨 앞에 추가
t_list	*ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;
	
	new = (t_list *)malloc(sizeof(t_list));
	
	if (*begin_list == NULL)
	{
		new->data = data;
		new->next = NULL;
		*begin_list = new;
	}
	else
	{
		new->data = data;
		new->next = *begin_list;
	}
	return (*begin_list);
}

//새로운 요소 맨 끝에 추가

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*p;
	t_list	*tmp;

	 p = (t_list *)malloc(sizeof(t_list));
	
	 if (*begin_list == NULL)
	{
		*begin_list = p;
		p->next = NULL;
		return ;
	}
	
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = p;
	p->data = data;
	p->next = NULL;
}

//요소 개수 반환
int	ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*p; 

	size = 0;
	p = begin_list;
	while (p)
	{
		p = p->next;
		size++;
	}
	return (size);
}

//마지막 요소 반환
t_list *ft_list_last(t_list *begin_list)
{
	t_list	*p;

	p = begin_list;
	while (p->next)
	{
		p = p->next;
	}
	return (p);
}

//

#include <stdio.h>

int	main(void)
{
	printf("--------------ex00-------------\n");
	int		i = 1;
	t_list	*p1;
	p1 = ft_create_elem(&i);
	printf("%d", *(int *)p1->data);

	printf("--------------ex01-------------\n");
	int	
}
