/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:31:02 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/16 15:40:48 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


#include <stdio.h>
int main()
{
	int	x;
	int	y;

	x = 4;
	y = 2;
	ft_swap(&x, &y);
	printf("%d %d", x, y);

	int *a;
	int *b;

	int aa = 0;
	int bb = 1;

	*a = &aa;
	*b = &bb

	ft_swap(a, b);
	ft_swap(&aa, &bb);
}

