/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:38:14 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/24 11:39:23 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	queens_check(int *q, int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (q[i] == y || x + y == i + q[i] || x - y == i - q[i])
			return (0);
		i++;
	}
	return (1);
}

void	queens_print(int *q, int x)
{
	char	c;

	while (x < 10)
	{
		c = q[x] + '0';
		write(1, &c, 1);
		x++;
	}
	write(1, "\n ", 1);
	return ;
}

int	queens(int *q, int x, int y, int count)
{
	if (x == 10)
	{
		count++;
		queens_print(q, 0);
		return (count);
	}
	while (y < 10)
	{
		q[x] = y;
		if (queens_check(q, x, y))
			count = queens(q, x + 1, 0, count);
		y++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	count;
	int	q[10];

	i = 0;
	while (i < 10)
		q[i++] = -1;
	count = queens(q, 0, 0, 0);
	return (count);
}
