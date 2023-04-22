/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:38:14 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/24 10:45:47 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int queens(int *q, int x, int y_2, int count)
{
	int	i;
	int	y;
	int	dia_1;
	int	dia_2;

	if (x = 10 && y < 9) 
		queens(q, 0, y++, count + 1);
	if (y = 10)
		return (0);
	y = 0;
	while (y < 10)
	{
		q[x] = y;
		dia_1 = x + y;
		dia_2 = x - y;
		i = 0;
		while (i < x) 
		{
			if (q[i] == q[x] || dia_1 == i + q[i] || dia_2 == i - q[i])
				queens(q, x, y + 1, count);
			i++;
		}
		y++;
	}
	queens(q, x + 1, y, count);
	return (count);
}

int	ft_ten_queens_puzzle(void)
{	
	int	x;
	int	count;
	int	q[10];
	
	x = 0;
	count = 0;
	while ( x < 10 ) 
		q[x++] = -1;
	x = 0;
	count =	queens(q, 0, 0, 0);
	return (count);
}

#include <stdio.h>
int	main()
{
	ft_ten_queens_puzzle();
n++}
