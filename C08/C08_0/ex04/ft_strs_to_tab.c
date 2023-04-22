/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:38:39 by ahhlee            #+#    #+#             */
/*   Updated: 2023/02/01 16:34:23 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	str_copy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*strs;

	i = 0;
	strs = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (strs == NULL)
		return (NULL);
	while (i < ac)
	{
		strs[i].size = str_len(av[i]);
		strs[i].str = av[i];
		strs[i].copy = (char *)malloc(sizeof(char) * (strs[i].size + 1));
		if (strs[i].copy == NULL)
			return (NULL);
		str_copy(strs[i].copy, av[i], strs[i].size);
		i++;
	}
	strs[i].str = 0;
	return (strs);
}
