/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:03:33 by ahhlee            #+#    #+#             */
/*   Updated: 2023/02/01 22:12:43 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*t;

	i = 0;
	t = (int *)malloc(sizeof(int) * length);
	if (t == NULL)
		return (NULL);
	while (i < length)
	{
		t[i] = f(tab[i]);
		i++;
	}
	return (t);
}
