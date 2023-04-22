/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:33:54 by ahhlee            #+#    #+#             */
/*   Updated: 2023/02/01 20:03:56 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str(int av, char **ac)
{
	char		*str;
	t_stock_str	*t;

	t = (t_stock str *)malloc(sizeof(t_stock_str) * av);
	while (i < av)
	{
		t[i].size = strlen(av[i]);
		t[i].str = av[i];
		t[i].copy = (char *)malloc(sizeof(char) * (t[i].size + 1));
		i++;
	}
	t[i].str = 0;
	return (t);
}
