/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:56:18 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/16 20:11:30 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	count;
	int	i;

	count = size / 2;
	i = size;
	while (count != 0)
	{
		tmp = tab[i - 1];
		tab[i - 1] = tab[size - i];
		tab[size - i] = tmp;
		count--;
		i--;
	}
}

/*
#include <stdio.h>

int main()
{
	int s[6] = {0, 1, 2, 3, 4, 5}; 
	ft_rev_int_tab(s, 6);
	printf("%d%d%d%d%d%d\n", s[0], s[1], s[2], s[3], s[4], s[5]);
	
	int d[5] = {0, 1, 2, 3, 4};
	ft_rev_int_tab(d, 5);
	printf("%d%d%d%d%d", d[0], d[1], d[2], d[3], d[4]);
}
*/
