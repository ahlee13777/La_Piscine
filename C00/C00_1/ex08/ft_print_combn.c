/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhlee <ahhlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 21:52:25 by ahhlee            #+#    #+#             */
/*   Updated: 2023/01/15 22:37:14 by ahhlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	depth_nbr(char arr[], int index, int num, int n)
{
	if (index == n)
	{
		write(1, arr, n);
		if (arr[0] != 10 - n + '0')
			write(1, ", ", 2);
		return ;
	}
	else
	{
		while (num < 10)
		{
			arr[index] = num + '0';
			depth_nbr(arr, index + 1, num + 1, n);
			num++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];

	depth_nbr(arr, 0, 0, n);
}

int main()
{
	ft_print_combn(2);
}

